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
    if(n%2 !=0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        int cnt = 0;
        if(n == 2) {
            cout << "AA\n";
            return;
        }
        for (int i = 1; i <= n; i++) {
            if(i%2 == 0) {
                cout << 'B';
            }
            else {
                cout << "AA";
            }
       
     }
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