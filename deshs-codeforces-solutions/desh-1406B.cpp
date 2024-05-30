#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        int A[10000];
        int n;
        cin >> n;

        // Save elements into array
        for (int j = 0; j < n; ++j) {
            cin >> A[j];
        }

        // Sort the array
        sort(A, A + n);

        // Create a hashmap of the array (freq count of unique ints)
        unordered_map<int, int> m; 
        for (int i = 0; i < n; i++) 
            m[A[i]]++; 

        // Print the hashmap
        for (auto i = m.begin(); i != m.end(); ++i) {
            cout << i->first << " : " << i->second << endl;
        }

        // Edge case with 0s
        if (m[0] > n - 5) {
            cout << 0;
            continue;
        }

        int countNegatives = 0;
        for (auto &pair: m) {
            if (pair.first < 0) 
                countNegatives += pair.second;
        }

    } 

    return 0;
}