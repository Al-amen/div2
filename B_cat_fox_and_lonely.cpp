#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Function to find the loneliness of the array
int findLoneliness(const vector<int>& a, int n) {
    unordered_set<int> subarrayORs; // Set to store the OR values of all subarrays
    int maxLoneliness = 1; // Initialize the maximum loneliness to 1

    for (int i = 0; i < n; ++i) {
        int currentOR = 0;
        for (int j = i; j < n; ++j) {
            currentOR |= a[j]; // Calculate the OR of the subarray [i, j]
            subarrayORs.insert(currentOR); // Insert the OR value into the set
            if (subarrayORs.size() == 1) {
                // If there's only one unique OR value, update the maximum loneliness
                maxLoneliness = max(maxLoneliness, j - i + 1);
            } else {
                // If there are multiple unique OR values, break the loop
                break;
            }
        }
        // Clear the set for the next iteration
        subarrayORs.clear();
    }
    

    return maxLoneliness; // Return the maximum loneliness
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findLoneliness(a, n) << endl;
    }
    return 0;
}
