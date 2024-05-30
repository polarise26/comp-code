#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    int n;

    string ch;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> ch;
        if (ch == "--X" || ch == "X--")
            x--;
        else
        {
            x++;
        }
    }

    cout << x;
    return 0;
}