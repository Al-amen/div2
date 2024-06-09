#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

using namespace std;

bool is_beautiful(vector<int>& a) {
    int n = a.size();
    sort(a.begin(), a.end());
    

    int first = a[0];
    
  
    vector<int> non_divisibles;
    
 
    for (int i = 1; i < n; ++i) {
        if (a[i] % first != 0) {
            non_divisibles.push_back(a[i]);
        }
    }
    
   
    if (non_divisibles.empty()) {
        return true;
    }
    
  
    int second = non_divisibles[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] % first != 0 && a[i] % second != 0) {
            return false;
        }
    }
 
    return true;
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (is_beautiful(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
