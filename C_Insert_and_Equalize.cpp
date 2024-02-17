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
    int negMx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] < 0 and v[i] > negMx) {
            negMx = v[i];
        }
    }
    if(negMx == INT_MIN) {
        negMx = 0;
    }
    sort(v.begin(), v.end());

    if(abs(negMx)> 0) {
        int y = v[n - 1] - (abs(negMx) + 1);
        int x = abs(negMx) + 1;
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if(v[i] < 0) {
                if(abs(v[i]) % x == 0) {
                    ans += abs(v[i]) / x;
                    ans += 
                }
                else {
                    ans += (abs(v[i]) / x) + 1;
                }
                
            }
        }
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}