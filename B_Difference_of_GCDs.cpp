#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        int p = l;
        if(p%i == 0) {
            v.push_back(p);
        }
        else {
            int mul_of_i = p / i + 1;
            p = i * mul_of_i;
            if(p <= r)
                v.push_back(p);
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}