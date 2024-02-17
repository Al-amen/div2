#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> d >> c >> p >> nl >> np;
    int drink = k*l / nl;
    int salt = p / np;
    int lime = c * d / 1;

    int ans = min(drink/n, min(salt/n, lime/n));
    cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc=1;// cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}