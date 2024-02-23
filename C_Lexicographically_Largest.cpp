
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

bool customCompare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
void CloSolveKori()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        vp.push_back({i + v[i] + 1, i});
    }
    sort(vp.begin(), vp.end(), customCompare);
    // map<ll, ll> mp;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if(mp[vp[i].first] == 0) {
    //         cout << vp[i].first << " ";
    //         mp[vp[i].first]++;
    //     }
    //     else {
    //         cout << vp[i].first - mp[vp[i].first] <<" ";
    //         mp[vp[i].first]++;
    //     }
    // }
    // cout << endl;

   
   

    for (int i = 0; i < n; i++) {
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    cout << vp[0].first << " ";
    int y = vp[0].second;

    for (int i = 1; i < n; i++)
    {
        //cout << vp[i].first << " " << vp[i].second << endl;
        if (vp[i].second > y and i  != n-1)
        {
            cout << vp[i].first - 1 << " ";
        }
        else
        {
            cout << vp[i].first << " ";
        }
        y = vp[i].second;
        }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        CloSolveKori();
    return 0;
}
