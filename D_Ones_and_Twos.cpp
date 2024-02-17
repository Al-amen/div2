#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct Node
{
    int sum;
};

class SegmentTree
{
private:
    vector<Node> tree;
    int n;

    void build(const vector<int> &arr, int v, int tl, int tr)
    {
        if (tl == tr)
        {
            tree[v].sum = arr[tl];
        }
        else
        {
            int tm = (tl + tr) / 2;
            build(arr, 2 * v, tl, tm);
            build(arr, 2 * v + 1, tm + 1, tr);
            tree[v].sum = tree[2 * v].sum + tree[2 * v + 1].sum;
        }
    }

    int query(int v, int tl, int tr, int l, int r)
    {
        if (l > r)
        {
            return 0;
        }
        if (tl == l && tr == r)
        {
            return tree[v].sum;
        }
        int tm = (tl + tr) / 2;
        return query(2 * v, tl, tm, l, min(r, tm)) + query(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
    }

    void update(int v, int tl, int tr, int pos, int newVal)
    {
        if (tl == tr)
        {
            tree[v].sum = newVal;
        }
        else
        {
            int tm = (tl + tr) / 2;
            if (pos <= tm)
            {
                update(2 * v, tl, tm, pos, newVal);
            }
            else
            {
                update(2 * v + 1, tm + 1, tr, pos, newVal);
            }
            tree[v].sum = tree[2 * v].sum + tree[2 * v + 1].sum;
        }
    }

public:
    SegmentTree(const vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 1, 1, n);
    }

    int getSum(int l, int r)
    {
        return query(1, 1, n, l, r);
    }

    void updateValue(int pos, int newVal)
    {
        update(1, 1, n, pos, newVal);
    }
};

bool hasSubarraySum(const vector<int> &a, int s)
{
    unordered_set<long long> prefixSums;
    long long currentSum = 0;

    for (int i = 1; i <= a.size(); i++)
    {
        currentSum += a[i - 1];

        if (currentSum == s || prefixSums.count(currentSum - s) > 0)
        {
            return true;
        }

        prefixSums.insert(currentSum);
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        SegmentTree segTree(a);

        while (q--)
        {
            int op;
            cin >> op;

            if (op == 1)
            {
                int s;
                cin >> s;

                // Check if there exists a subarray with sum s
                bool found = hasSubarraySum(a, s);
                cout << (found ? "YES" : "NO") << endl;
            }
            else
            {
                int i, v;
                cin >> i >> v;

                // Update the array
                segTree.updateValue(i, v);
                a[i] = v; // Update the array manually for hasSubarraySum function
            }
        }
    }

    return 0;
}
