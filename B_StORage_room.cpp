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
    int mat[n][n];
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int p = 1073741823;
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if(i == j) {
                continue;
            }
            p = (p & mat[i][j]);
        }
        ans.push_back(p);
    }
    // for(auto it : ans)
    //     cout << it << " ";
    // cout << endl;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i != j) {

                if(mat[i][j] != (ans[i] | ans[j])) {
                    cout << "NO\n";
                    ok = true;
                    break;
                }
                    
            }
            
        }
        if(ok) break;
       
        //if(ok)break;
       
    }
 
    if(ok == false) {
        cout << "YES\n";
        for(auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}