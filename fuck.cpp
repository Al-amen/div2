#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void CloSolveKori() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    string smallest_string = ""; // Initialize the lexicographically smallest string
    int num_paths = 1; // Initialize the number of paths leading to the smallest string

    // Traverse the grid to construct the lexicographically smallest string
    for (int i = 0; i < n; ++i) {
        // Determine the current character based on the grid values and the previous character
        char current_char;
        if (s1[i] == '1' || (s1[i] == '0' && s2[i] == '1')) {
            current_char = '1';
            // Increment the number of paths if we move down
            ++num_paths;
        } else {
            current_char = '0';
        }
        
        // Update the lexicographically smallest string
        smallest_string += current_char;
    }

    // Output the lexicographically smallest string and the number of paths
    cout << smallest_string << endl;
    cout << num_paths << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        CloSolveKori();
    }

    return 0;
}
