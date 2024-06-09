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
    vector<int> letter, digit;
    for (int i = 0; i < n; i++) {
        if(isdigit(s[i])) {
            digit.push_back(i);
        }
        else {
            letter.push_back(i);
        }
    }
    if(letter.size() != 0 and digit.size() != 0){
        if(digit[0] < letter[0]) {
            if(is_sorted(s.begin(),s.end())){
                cout << "YES\n";
                return;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    else {
        if(is_sorted(s.begin(),s.end())) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
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