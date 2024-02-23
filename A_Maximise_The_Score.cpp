#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori()
{
    int n;
    cin >> n;
    vector<ll> v(2 * n);

    for (int i = 0; i <2* n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < 2*n-1; i++) {
        ans += min(v[i], v[i + 1]);
        i++;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        CloSolveKori();
    return 0;
}