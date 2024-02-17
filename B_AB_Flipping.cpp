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
    string s;
    cin >> s;
    int cnt = 0;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if(s[i] == 'B') {
            cnt++;
        }
        else {
            ans += cnt;
            if(cnt) {
                cnt = 0;
                s[i] = 'B';
                i++;
            }

        }
    }
    cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}