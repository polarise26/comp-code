#include <bits/stdc++.h>

using namespace std;

int optimum(vector<int> nums)
{
    int n = nums.size();
    int max_prod = LONG_MIN, prefix = 1, suffix = 1;

    for (int i = 0; i < n; ++i)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix = prefix * nums[i];
        suffix = suffix * nums[n - 1 - i];

        max_prod = max(max_prod, max(prefix, suffix));
    }

    return max_prod;
}

int main()
{
    vector<int> A = {5, 2, 6, 8, -1, 0, -2, -6, 3, 6};
    cout << optimum(A);

    return 0;
}