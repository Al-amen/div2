#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
ll sum = 0;
void CloSolveKori() {
   
       
}   
    
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


string s;
while(cin >> s) {
    //cout << s << endl;
    int n = s.size();
    int j = 0;
    vector<string> v = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    vector<int> vv;
    vector<pair<string, vector<int>>> vp;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            a.push_back({(i), s[i] - '0'});
        }
    }
    for (int i = 0; i < 10; i++)
    {
        size_t p = s.find(v[i]);
        size_t q = s.rfind(v[i]);
        if (p != string::npos)
        {
            a.push_back({p, i +1});
            a.push_back({q, i + 1});
        }
    }
    sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i].first << " " << a[i].second << endl;
    // }
    int sz = a.size();
    sum += 1LL * (a[0].second * 10 + a[sz - 1].second);
    
}


cout << sum << endl;
return 0;
}