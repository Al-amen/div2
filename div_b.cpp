#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


signed main() { 
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arrA[n], arrB[n];
        int freqA[2*n+1] = {0}, freqB[2*n+1] = {0};
        vector<int> subsetA, subsetB;

        // Input for array A
        for (int i = 0; i < n; ++i) {
            cin >> arrA[i];
            freqA[arrA[i]]++;
        }

        // Input for array B
        for (int i = 0; i < n; ++i) {
            cin >> arrB[i];
            freqB[arrB[i]]++;
        }

        // Find subsets with frequency 2 in both arrays
        for (int i = 1; i <= 2*n; ++i) {
            if (freqA[i] == 2 && freqB[i] == 2) {
                subsetA.push_back(i);
                subsetA.push_back(i);
                subsetB.push_back(i);
                subsetB.push_back(i);
            }
        }

        // Find remaining elements from array A to form subset l
        for (int i = 1; i <= 2*n; ++i) {
            if (freqA[i] == 2 && freqB[i] == 0) {
                subsetA.push_back(i);
            }
        }

        // Output the subsets
        for (int i = 0; i < 2 * k; ++i) {
            cout << subsetA[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 2 * k; ++i) {
            cout << subsetB[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
