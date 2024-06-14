#include <bits/stdc++.h>

using namespace std;

pair<int, int> bruteForce(vector<int> nums)
{

    int n = nums.size(), rptg = -1, miss = -1;

    for (int i = 1; i <= n; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < n; ++j)
        {
            if (nums[j] == i)
                cnt++;
        }
        if (cnt == 2)
            rptg = i;
        else if (cnt == 0)
            miss = i;

        if (rptg != -1 && miss != -1)
            break;
    }
    return {rptg, miss};
}

pair<int, int> hashSol(vector<int> nums)
{
    int n = nums.size(), rptg = -1, miss = -1;
    int hashMap[n + 1] = {0};

    for (int i = 0; i < n; ++i)
        hashMap[nums[i]]++;

    for (int i = 1; i <= n; ++i)
    {
        if (hashMap[i] == 2)
            rptg = i;
        else if (hashMap[i] == 0)
            miss = i;

        if (rptg != -1 && miss != -1)
            break;
    }

    return {rptg, miss};
}

int main()
{
    vector<int> a = {1, 3, 2, 6, 5, 7, 7, 4, 9};
    pair<int, int> ans = hashSol(a);
    cout << "[" << ans.first << ", " << ans.second << "]";

    return 0;
}