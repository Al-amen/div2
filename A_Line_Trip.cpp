#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mx = INT_MIN;
    for (int i = 1; i < n; i++)
    {
         mx = max(mx, (v[i] - v[i - 1])); // calute maximum difference between two stations 
    }
    mx = max(mx, v[0] - 0);
    mx = max(mx, 2 * (x - v[n - 1])); // at last station you can not fillup the tank thats way you have to back n-1 station.
    cout << mx << endl;
}


int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}