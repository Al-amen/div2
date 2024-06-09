#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
     ll ans = 1LL * n *mn +(n - 1) + k;
     cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}