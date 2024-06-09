#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
const int mx = 1e6 + 7;
const int mod = 1e9+7;
vector<ll> v(mx,1);
using namespace __gnu_pbds;
int cs = 0;
ll binpow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

ll invmod(ll a, ll mod) {
    return binpow(a, mod - 2, mod);
}
void CloSolveKori() {

    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    ll nom = 1LL * v[n] % mod;
    ll dnom = 1;
    
    for(auto i : mp) {
        dnom =  dnom * v[i.second] % mod;
    }

    dnom = invmod(dnom, mod);
    ll ans = nom * dnom % mod;

    cout << ans  << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
for (ll i = 1; i < mx; i++) {
    v[i] = v[i - 1] * i % mod;
}
int tc=1;
//cin >> tc;
while (tc--)
    CloSolveKori();
return 0;
}
