#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> input = { -1, 0, 1, 2, -1, -4 }; 
    int n = input.size();

    sort(input.begin(), input.end());

    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i) {
        m[input[i]]++;
    }

    for (auto i = m.begin(); i != m.end(); ++i) {
        cout << i -> first << " " << i -> second << endl;
    }

    return 0;
}