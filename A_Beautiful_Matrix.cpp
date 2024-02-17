#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int a;
            cin >> a;
            if(a == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(3 - x-1) + abs(3 - y-1) << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc=1;// cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}