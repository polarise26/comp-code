#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, t;
    string q;

    cin >> size >> t >> q;

    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; q[j] != '\0'; ++j)
        {
            if (q[j] == 'B' && q[j + 1] == 'G')
            {
                q[j] = 'G';
                q[j + 1] = 'B';
                ++j;
            }
        }
    }

    cout << q;
    return 0;
}