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
    set<int> s;
    vector < pair<int, int> >vp;
    int one = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
        vp.push_back({v[i], i});
        if(v[i]==1)
            one++;
    }
     if(s.size() == 1) {
        cout << "0\n";
        return;

    }
    if (one > 0) {
        cout << "-1\n";
        return;
    }
   
    sort(vp.begin(), vp.end());
    vector<pair<int, int>> ans;
    while(vp[0].first != vp[n-1].first) {
        int x = vp[0].first;
        for (int i = 1; i < n; i++) {
            if(vp[i].first != x) {
                vp[i].first = (vp[i].first + x-1) / x;
                ans.push_back({vp[i].second+1, vp[0].second+1});
            }

        }
        sort(vp.begin(), vp.end());
    }
    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}