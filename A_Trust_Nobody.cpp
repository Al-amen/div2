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
    for (int i = 0; i < n; i++)  {
        cin >> v[i];
    }
    for (int k = 0; k <= n; k++) {
        int t = 0;
        for (int i = 0; i < n; i++) {
            if(k >= v[i])
                t++;

        }
        int x = n - t;
        if(x == k) {
            cout << k << endl;
            return;
        }
    }
    cout << "-1\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}