#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

bool isValid(int x, int y, int n) {
    return x >= 0 && x < 2 && y >= 0 && y < n;
}

bool canReachDestination(int n, const string& row1, const string& row2) {
    vector<vector<bool>> visited(2, vector<bool>(n, false));
    queue<pair<int, int>> q;

    q.push({0, 0}); // Start at cell (0, 0)

    while (!q.empty()) {
       int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // Check if we reached the destination
        if (x == 1 && y == n - 1)
            return true;

        // Move left
        if (isValid(x, y - 1, n) && row1[y - 1] == '>' && !visited[x][y - 1]) {
            q.push({x, y - 1});
            visited[x][y - 1] = true;
        }

        // Move right
        if (isValid(x, y + 1, n) && row1[y] == '<' && !visited[x][y + 1]) {
            q.push({x, y + 1});
            visited[x][y + 1] = true;
        }

        // Move down
        if (isValid(x + 1, y, n) && row2[y] == '>' && !visited[x + 1][y]) {
            q.push({x + 1, y});
            visited[x + 1][y] = true;
        }

        // Move up
        if (isValid(x - 1, y, n) && row2[y] == '<' && !visited[x - 1][y]) {
            q.push({x - 1, y});
            visited[x - 1][y] = true;
        }
    }
    return false; // Destination not reachable
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        if (canReachDestination(n, row1, row2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
