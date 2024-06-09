#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n ;
    cin >> n ;
    string s1 , s2 ;
    cin >> s1  >> s2 ;

    map<string, int> mp ;
    for (int i = 0 ; i < n ; i++) {
        string temp = s1.substr(0 , i + 1) + s2.substr(i, n);
        mp[temp]++ ;
    }

    cout << mp.begin()->first << endl ;
    cout << mp.begin()->second << endl;
    
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}



