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
    int a[n + 1];
    int x[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
        
    multiset<pair<int, int>> sp;
    for (int i = 1; i <= n; i++){
         cin >> x[i], sp.insert({abs(x[i]), a[i]});
    }
       
    int y = 0;
    bool ok = 1;
    while (!sp.empty())
    {
        int cur = k;
        while (!sp.empty() && cur > 0)
        {
            pair<int, int> p = *sp.begin();
            if (p.first - y <= 0)
            {
                ok = 0;
            }
            sp.erase(sp.begin());
            if (cur >= p.second)
            {
                cur -= p.second;
            }
            else
            {
                sp.insert({p.first, p.second - cur});
                cur = 0;
                break;
            }
        }
        y++;
        }
        if(ok) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}