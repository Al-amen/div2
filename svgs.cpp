#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

int main()
{
    vector<pair<int, int>> vp = {{3, 5}, {2, 6}, {3, 4}, {1, 7}, {2, 3}};

    // Sorting the vector using custom comparison function
    sort(vp.begin(), vp.end(), customCompare);

    // Printing the sorted vector
    for (const auto &p : vp)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}