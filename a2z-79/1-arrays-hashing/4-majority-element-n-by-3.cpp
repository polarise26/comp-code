#include <bits/stdc++.h>

using namespace std;

vector<int> hashSol(int arr[], int n)
{

    int lim = n / 3;
    unordered_map<int, int> hashMap;
    vector<int> ans;

    for (int i = 0; i < n; ++i)
        hashMap[arr[i]]++;

    for (auto i = hashMap.begin(); i != hashMap.end(); ++i)
        if (i->second > lim)
            ans.push_back(i->first);

    return ans;
}

/* Optimal solution - Boyer Moore's Voting algorithm: essentially, keeping the count for the amt of times it has seen an
element, if the count of either element falls to 0; change the number you're keeping count for! */

vector<int> boyerMoore(int arr[], int n)
{
    int cnt1 = 0, cnt2 = 0;
    int elt1 = INT_MIN;
    int elt2 = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (cnt1 == 0 && elt2 != arr[i])
        {
            cnt1 = 1;
            elt1 = arr[i];
        }
        else if (cnt2 == 0 && elt1 != arr[i])
        {
            cnt2 = 1;
            elt2 = arr[i];
        }
        else if (arr[i] == elt1)
            cnt1++;
        else if (arr[i] == elt2)
            cnt2++;

        else
            cnt1--, cnt2--;
    }

    vector<int> ans;
    cnt1 = 0, cnt2 = 0;

    // Checking for the actual count, the voting algorithm may cause the actual count to be different than calculated
    for (int i = 0; i < n; ++i)
    {
        if (elt1 == arr[i])
            cnt1++;
        if (elt2 == arr[i])
            cnt2++;
    }

    int lim = n / 3;
    if (cnt1 > lim)
        ans.push_back(elt1);
    if (cnt2 > lim)
        ans.push_back(elt2);

    return ans;
}

int main()
{
    int A[] = {2, 2, 4, 4, 5, 5, 5, 2};
    int n = sizeof(A) / sizeof(A[0]);
    vector<int> x = boyerMoore(A, n);

    for (auto i : x)
        cout << i << " ";

    return 0;
}