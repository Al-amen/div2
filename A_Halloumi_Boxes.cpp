#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n,k;
    cin >> n >> k; 
    vector<int>v(n),v1;
    for (int i = 0; i<n; i++) {
        cin >> v[i];
    }
    v1 = v;
    reverse(v1.begin(), v1.end());

    if (is_sorted(v.begin(), v.end()) or is_sorted(v1.begin(), v1.end()) and k >= 2)
    {
        cout << "YES\n";
    }
    else if(k >= 2) {
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