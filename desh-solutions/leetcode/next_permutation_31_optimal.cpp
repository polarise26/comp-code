#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void nextPermutation(vector<int>& A) {
            int n = A.size(); // size of the array.

            // Step 1: Find the break point, 1s digit to 10s, 100s, and so on
            int ind = -1; // break point
            for (int i = n - 2; i >= 0; i--) {
                if (A[i] < A[i + 1]) {
                    // index i is the break point
                    ind = i;
                    break;
                }
            }

            // EDGE CASE: If break point does not exist
            // It means the array was already sorted in desc order
            if (ind == -1) {
                // reverse the whole array:
                reverse(A.begin(), A.end());
                return;
            }

            // Step 2: Find the next greater element in rightPart
            for (int i = n - 1; i > ind; i--) {
                if (A[i] > A[ind]) {
                    swap(A[i], A[ind]);
                    break;
                }
            }

            // Step 3: reverse the rightPart
            reverse(A.begin() + ind + 1, A.end());
        }
};