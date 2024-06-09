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
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> st;
    st.push_back(v[n - 1]);

     for (int i = n - 2; i >= 0; --i) {
            if (v[i] >= 10 && v[i] > st.back()) {
                st.push_back(v[i] % 10);
                st.push_back(v[i] / 10);
            } else {
                st.push_back(v[i]);
            }
        }

        reverse(st.begin(), st.end());
        if(is_sorted(st.begin(),st.end())) {
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