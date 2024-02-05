#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

int main()
{
   ll t;
    std::cin >> t;

    while (t--)
    {
        ll a, b, r;
        std::cin >> a >> b >> r;

         a = std::max(a, b);
         b = std::min(a, b);
        ll x = 0;
        ll ans = b - 1;
        ll mn = ans;
        for (ll i = 60; i >= 0; --i)
        {
            ll bit1 = ((a >> i) & 1);

            ll bit2 = ((b >> i) & 1);
    
             if(bit2 == 1 and bit1 == 0 and x + (1 <<i)<=r) {
                if(ans >= 2*(1 << i)){
                    x += (1 << i);
                    ans -= 2 * (1 << i);
                }
                else {
                    mn = min(mn, 2 * (1 << i) - ans);
                }
                    
             }




        //     if (bit1 == bit2)
        //     {
        //         continue;
        //     }

        //     if ((bit1 == 1 && x + (1 << i) )<= (r && (max_val - (1 << i))) >= ((min_val + (1 << i))))
        //     {
        //         x += (1 << i);
        //         max_val -= (1 << i);
        //         min_val += (1 << i);
        //     }
        // }

     
    }
    cout << min(ans, mn) << endl;
    }


    return 0;
}
