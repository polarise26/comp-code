#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Solution(vector<int> input, int n) {
    vector<vector<int>> ans;

    sort(input.begin(), input.end());

    for (int i = 0; i < n - 1; ++i) {
        if (i != 0 && input[i] == input[i - 1]) continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = input[i] + input[j] + input[k];
            if (sum == 0) {
                vector<int> temp = { input[i], input[j], input[k] };

                ans.push_back(temp);

                j++;
                k--;

                while (j < k && input[j] == input[j - 1]) j++;
                while (j < k && input[k] == input[k + 1]) k--; 
            } else if (sum > 0) {
                --k;
            } else {
                j++;
            }
        }
    }

    return ans;
}

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