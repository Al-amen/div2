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
    for (int i = 0; i < n; i++) {
        cin >> v[i];

    }
    vector<int> MEX;
    for (int i = 0; i < n; i += 2) {
        MEX.push_back(v[i]);
    }

    sort(MEX.begin(), MEX.end());
    int x = 0, y = 0;
    for (int i = 0; i < n/2; i++) {
        if(MEX[i] != i) {
            x = i;
            break;
        }
        if(MEX[i+1] != MEX[i]+1) {
            y = MEX[i] + 1;
            break;
        }
    }
    cout << max(x, y) << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}
