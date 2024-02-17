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
    int cnt = 1;
    int res = 0;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == '.' and s[i+1] == '.') {
            cnt++;
        }
        else {
            if(cnt >= 3) {
                res = 2;
                cnt = 1;
                cout << 2 << endl;
                return;
                break;
               
            }
            else if(cnt == 2) {
               
                res += cnt;
                cnt = 1;
            }
            else if(cnt == 1 and s[i] == '.') {
                res += cnt;
                cnt = 1;
            }
        }
    }
     if(cnt >= 3) {
         res = 2;

     }
     else if(cnt == 2) {
         res += 2;
     }
     else if(cnt == 1 and s[n-1] == '.') {
         res += 1;
     }
     cout << res << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}