#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[100], B[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            A[i] = a;
            B[i] = b;
        }
        else
        {
            A[i] = b;
            B[i] = a;
        }
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " " << B[i] << "\n";

    return 0;
}