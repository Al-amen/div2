#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    ll n;
    cin >> n;
    string s = to_string(n);
    if(n<100){
        if(n<=18){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        return;
    }


    bool  ok = true;
    ll x = (s[0] - '0') * 10 + s[1] - '0';
    if(x<=19){
        for (int i = 0; i < s.size() - 1; i++){
          
            if(s[i] == '0'){
                ok = false;
                break;
            }
        }

        if(s.back() == '9'){
            ok = false;
        }
    }
    else{
        ok = false;
    }

    if(ok) {
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



