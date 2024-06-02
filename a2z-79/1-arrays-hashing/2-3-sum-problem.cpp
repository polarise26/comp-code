#include <bits/stdc++.h>

using namespace std;

// brute force algo: loops through entire array to find matching triplets.

vector<vector<int>> bruteForce(vector<int> &num, int n)
{

    set<vector<int>> solset;

    for (int i = 0; i <= n; ++i)
        for (int j = i + 1; j <= n; ++j)
            for (int k = j + 1; k <= n; ++k)
            {
                if (num[i] + num[j] + num[k] == 0)
                {
                    vector<int> t = {num[i] + num[j] + num[k]};
                    sort(t.begin(), t.end());
                    solset.insert(t);
                }
            }

    vector<vector<int>> ans(solset.begin(), solset.end());
    return ans;
}

// in this solution, we'll use two pointers, that will "move" across the vector, depending on the nature of the sum of the triplets.
// we first sort the array, then s
// so, let's say the sum of triplets we arrive is -ve, we shall move the "j" (mid) pointer towards the start, and vice versa
// once ptrs "j" (mid) "k" (right) point to the same index, we stop the traversal, and the move the "i" (left) ptr.
vector<vector<int>> twoPtrSol(vector<int> &num, int n)
{

    vector<vector<int>> ans;
    sort(num.begin(), num.end());

    for (int left = 0; left < n; ++left)
    {
        if (left != 0 && num[left] == num[left - 1])
            continue;
        int mid = left + 1;
        int right = n - 1;
        while (mid < right)
        {
            int sum = num[right] + num[mid] + num[left];
            if (sum < 0)
                ++mid;
            else if (sum > 0)
                --right;
            else
            {
                ans.push_back({num[left], num[mid], num[right]});
                ++mid;
                --right;
                while (mid < right && num[mid] == num[mid - 1])
                    ++mid;
                while (mid < right && num[right] == num[right + 1])
                    --right;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = twoPtrSol(arr, n);
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
