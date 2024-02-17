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
    int p = count(s.begin(), s.end(), '0');
    // int one = n - p;
    // int cnt = 0;
    // for (int i = 0; i < n-1; i++) {
    //     if((s[i] != s[i+1])) {
    //         cnt++;
    //     }
    // }
    // cout << one << " " << p + cnt << endl;
    // if(p + cnt > one) {
    //     cout << "YES\n";
    // }
    // else {
    //     cout << "NO\n";
    // }
    if(p > 0 ){
        cout << "YES\n";
    }
    else  {
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
