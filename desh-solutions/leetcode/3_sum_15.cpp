#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> input = { -1, 0, 1, 2, -1, -4 }; 
    int n = input.size();

    vector<vector<int>> ans = Solution(input, n);

    for (auto i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[0].size(); ++j) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}