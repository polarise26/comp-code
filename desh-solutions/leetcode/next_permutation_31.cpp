// Video explaining the solution - https://www.youtube.com/watch?v=JDOXKqF60RQ

#include <bits/stdc++.h>
using namespace std;

void itDoesItForYou(vector<int>);

int main() {
    vector<int> A;
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int val;

        cin >> val;

        A.push_back(val);
    }

    // 1. Find the longest prefix seq possible
    int index;
    for (int i = n - 1; i >= 0; --i) {
        if (A[i - 1] < A[i]) {
            index = i;
            break;
        } 
    }

    // cout << index;

    // 2. Find the next greatest index to replace the index with
    for (int i = n - 1; i > index; --i) {
        if (A[i] > A[index - 1]) {
            int temp;

            temp = A[i];
            A[i] = A[index - 1];
            A[index - 1] = temp;  

            break;
        }    
    } 

    // 3. Sort the rest of the array in ascending order
    reverse(A.begin() + index, A.end());

    for (int i = 0; i < n; ++i) { 
        cout << A[i] << " ";
    }

    cout << endl;
}

void itDoesItForYou(vector<int> A) {
    for (int i : A) {
        cout << i << " ";
    }

    cout << endl;

    next_permutation(A.begin(), A.end());

    for (int i : A) {
        cout << i << " ";
    }
}