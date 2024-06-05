#include <bits/stdc++.h>

using namespace std;

long long maxSubSum(int arr[], int n)
{
    long long max_sum = LONG_MIN; // max sum so far in a contiguous block
    long long sum = 0;            // sum each iteration

    int start = 0;
    int ansStart = -1, ansEnd = -1; // index of the start of the subarray
    for (int i = 0; i < n; ++i)
    {
        if (sum == 0)
            start = i;

        sum += arr[i];
        if (sum > max_sum)
        {
            max_sum = sum;

            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
            sum = 0;
    }

    cout << "The sub-array with the maximum sum is: [";
    for (int i = ansStart; i <= ansEnd; ++i)
        cout << arr[i] << " ";
    cout << "]\n";

    return max_sum;
}

int main()
{

    int Arr[] = {3, 5, -2, 32, 2, -456, -4, 343, 3, -32, -15, -85, 456, 47, 92, -734, 92};
    int N = sizeof(Arr) / sizeof(Arr[0]);

    int max_Sum = maxSubSum(Arr, N);
    cout << "The maximum sum of a sub-array within the given array is: " << max_Sum;

    return 0;
}