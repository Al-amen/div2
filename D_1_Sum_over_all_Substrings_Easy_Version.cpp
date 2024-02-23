#include <bits/stdc++.h>
using namespace std;

void calculateAndPrintSum()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string extendedString = "?";
    extendedString += s;

    vector<int> f(n + 1);
    long long totalSum = 0;

    for (int i = n; i >= 1; --i)
    {
        if (extendedString[i] == '1')
        {
            // Calculate the length of the remaining string
            int remainingLength = n - i + 1;
            // Calculate the number of substrings starting at this position
            int substringsCount = (remainingLength + 2) / 3;
            // Calculate the total number of 1s required for p-good substrings
            long long onesRequired = 1LL * substringsCount * (remainingLength - 1) / 2;
            // Add the required 1s to the total sum
            totalSum += onesRequired;
        }
    }

    cout << totalSum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--)
        calculateAndPrintSum();
    return 0;
}
