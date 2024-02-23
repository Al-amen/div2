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
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
    
        cin >> b[i];
    }
    
    map<int, int> mp;
    vector<pair<int, int>> pp;
    for (int i = 0; i < n; i++) {
        mp[a[i]] = b[i];
        pp.push_back({a[i], b[i]});
        
    }
    sort(a.begin(), a.end());
    vector<int> vv;
    for (int i = 0; i < n; i++) {
        vv.push_back(mp[a[i]]);

    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << vv[i] << " ";
    cout << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}

