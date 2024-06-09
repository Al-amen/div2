#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

    }
    int mn = min(v[0], v[1]);
    for (int i = 1; i < n-1; i++) {
        vector<int> vv(3);
        vv[0] = v[i - 1];
        vv[1] = v[i];
        vv[2] = v[i + 1];
        sort(vv.begin(), vv.end());
        int p = vv[1];
        mn = max(p, mn);
    }
    cout << mn << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}
