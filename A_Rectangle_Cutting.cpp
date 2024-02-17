#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    ll a, b;
    cin >> a >> b;

    if (a % 2 == 0 and a/2 != b)
    {
      
            cout << "YES" <<endl;
            return;
        
    }
    else if (b % 2 == 0 and b/2 !=a)
    {
        
            cout << "YES" << endl;
            
            return;
        
    }

    cout << "NO\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}