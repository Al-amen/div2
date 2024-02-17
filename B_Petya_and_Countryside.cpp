#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x = 1;
        for (int j = i - 1; j >= 0; j--) {
            if(v[j]<=v[j+1]) {
                x++;
            }
            else break;

        }
        for (int j = i+1; j < n; j++) {
            if(v[j]<=v[j-1]){
                x++;
            }
            else {
                break;
            }
        }
        mx = max(x, mx);
    }
    cout << mx << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc=1; //cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}