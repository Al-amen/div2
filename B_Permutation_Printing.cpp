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
    vector<int> v(n+1,0);
    for (int i = 1; i <= n; i++) {
        v[i] = i;
    }
    int k = n, p = 1;
    for (int i = 1; i <=n; i++) {
        if(i%2==1) {
            cout << k << " ";
            k--;
        }
        else {
            cout << p << " ";
            p++;
        }
    }
    cout << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}