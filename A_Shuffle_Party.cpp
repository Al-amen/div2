#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
ll BinPow(ll a, ll b)
{

    ll result = 1;
    while (b > 0)
    {

        if (b % 2 == 1)
            result = result * a;
        a = a * a;
        b = b / 2;
    }
    return result;
}
void CloSolveKori() {
    ll n; 
    cin >> n;
    if(n&(n-1) == 0) {
        cout << n << endl;
    }
    else {
        ll x = log2(n) + 1;

        ll ans = BinPow(2, x - 1);
        cout << ans << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}