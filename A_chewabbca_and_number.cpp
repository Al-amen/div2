#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll n;
    cin >> n;
    string s = to_string(n);
    int l = s.size();
    ll ans = 0;
    for (int i = 0; i < l; i++) {
        int x = s[i] - '0';
        if( i == 0 and x == 9) {
            ans = ans * 10 + 9;
        }
        else {
            ans = ans * 10 + min(x,(9 - x));
        }
    }
    cout << ans << endl;
}