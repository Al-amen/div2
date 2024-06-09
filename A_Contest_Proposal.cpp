#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl    '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

void cholosolvekori() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    multiset<int> difficulty_set;
    
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        difficulty_set.insert(a[i]);
    }
    
   
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        difficulty_set.insert(b[i]);
    }
    
    int i = 0, j = 0;
    int new_problems = 0;
    while (j < n) {
        if (a[i] > b[j]) {
            difficulty_set.erase(difficulty_set.find(*--difficulty_set.end()));
            difficulty_set.insert(b[j]);
            new_problems++;
            j++;
        } else {
            i++;
            j++;
        }
    }
    
    cout << new_problems << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
       cholosolvekori();
    
    return 0;
}
