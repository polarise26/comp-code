// A. My First Sorting Problem
/*

You are given two integers x and y

.

Output two integers: the minimum of x
and y, followed by the maximum of x and y

.
Input

The first line contains a single integer t
(1≤t≤100

) — the number of test cases.

The only line of each test case contains two space-separated integers x
and y (0≤x,y≤9

).
Output

For each test case, output two integers: the minimum of x
and y, followed by the maximum of x and y

.
Example
Input
10
1 9
8 4
1 4
3 4
2 0
2 4
6 9
3 3
0 0
9 9

Output
1 9
4 8
1 4
3 4
0 2
2 4
6 9
3 3
0 0
9 9


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int maxArr[10000], minArr[10000];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        int max = a > b ? a : b;
        int min = (max == a ? b : a);
    
        // cout << max << " " << min;
        maxArr[i] = max;
        minArr[i] = min;
    }

    for (int i = 0; i < n; i++) {
        cout << maxArr[i] << " " << minArr[i] << endl;
    }

    return 0;
}