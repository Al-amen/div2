#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
const int N = 210000;
int a[N];
void CloSolveKori() {
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        
    }
    ll tt = 0;
    for (int i = 1; i <=n; i++) {
        tt += 1LL*max(a[i] - a[i - 1], 0);
    }
   
    cout <<  tt-1 << endl;
}

int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}