#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
double startTime;
double getCurrentTime()
{
    return ((double)clock() - startTime) / CLOCKS_PER_SEC;
}
void CloSolveKori() {
    int n, m;
    cin >> n >> m;
    int arr[n+1][m+1];
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int b[n + 1][m + 1];
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                b[j][i] = 0;
               // b[i][j] = 0;
            }
            else {
               
                    b[i][j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

startTime = (double)clock();
int tc = 1; // cin>>tc;
while (tc--)
    CloSolveKori();
return 0;
}