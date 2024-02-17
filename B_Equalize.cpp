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
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    vector<int> a;
    for (auto x : s)
    {
        a.push_back(x);
    }
    int p = n;
    n = a.size();
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int x = a[i] + p - 1;
        int y = upper_bound(a.begin(), a.end(), x) - a.begin() - i;
       
        ans = max(ans, y);
    }
    cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}