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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0;
    ll maxi = 0;
    ll k = 0;
    for (int i = 0; i < n; i++)
    {
        maxi=k;
        sum+=arr[i];
        maxi+=arr[i];
        k=max(abs(sum),maxi);
     }
     cout << k << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}