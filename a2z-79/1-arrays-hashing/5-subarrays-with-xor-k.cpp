#include <bits/stdc++.h>

using namespace std;

int bruteForce(int A[], int n, int K)
{

    int ct = 0;

    for (int i = 0; i < n; ++i)
    {
        int xr = 0;
        for (int j = i; j < n; ++j)
        {
            xr = xr ^ A[j];
            if (xr == K)
                ct++;
        }
    }

    return ct;
}

int hashSol(int A[], int n, int K)
{

    int ct = 0, xr = 0;

    map<int, int> hashSet;
    hashSet[xr]++;

    for (int i = 0; i < n; ++i)
    {
        xr = xr ^ A[i]; // computing prefix xor so far

        int x = xr ^ K;   // since; if any xor so ffar that we've seen in the subarray = x, that means from then
                          // till i a subarray may be formed with an xor of K, x^k = xr -> x = xr^k
        ct += hashSet[x]; // we simply add the number of times we've seen a prefix xor = the req'd x

        hashSet[xr]++; // add the prefix xor till i to the hash map
    }
    return ct;
}

int main()
{

    int a[] = {4, 2, 2, 6, 4};
    int N = sizeof(a) / sizeof(a[0]);
    int XOR = 6;

    cout << bruteForce(a, N, XOR);

    return 0;
}