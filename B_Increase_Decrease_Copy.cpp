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
    vector<ll> a(n);
    vector<ll> b(n + 1);
    
    // Read input for arrays a and b
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++) {
        cin >> b[i];
    }

    vector<int> v;
    ll p = 1e18;
    ll diff = 0;
    int ok = 0;

    
    for (int i = 0; i < n; i++) {
        diff += abs(a[i]- b[i]);
        if(b[n] >= min(a[i], b[i]) and b[n] <= max(a[i], b[i])){
            p = 0;
        }
        p = min(p, abs(a[i] - b[n]));
        p = min(p, abs(b[i] - b[n]));
    }

    cout << diff + p + 1 << endl;
}


int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}