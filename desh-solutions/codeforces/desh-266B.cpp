#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    char children[10000];

    cin >> n >> t;
    cin >> children;

    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ++j) {
            if (children[j] == 'B' && children[j + 1] == 'G') {
                children[j] = 'G';
                children[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << children;

    return 0;
}