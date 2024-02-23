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
    vector<int> ind;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 1) {
            ind.push_back(i);
        }
    }
    //cout << ind[0] << ind.size() << endl;
    vector<int> vv;
    int cnt = 0;
    for (int i = ind[0]; i <= ind[ind.size()-1]; i++) {
        if(v[i] == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}