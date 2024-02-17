#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll left = 0;
    ll right = n;
    while(right - left  > 1) {
        ll mid = (right + left) / 2;
        ll x = (n + 6) / 7;
        ll y = mid * l + min(mid * 2, x) * t;
        if(y >= p) {
            right = mid;
        }
        else {
            left = mid;
        }
    }
    cout << n - right << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}