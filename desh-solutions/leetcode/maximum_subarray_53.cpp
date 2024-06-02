#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> input) {
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < input.size(); ++i) {
        sum += input[i];

        if (sum > max) {
            max = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return max;
}

int main() {
    vector<int> input = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = input.size();

    int ans = solution(input);

    cout << ans;

    return 0;
}