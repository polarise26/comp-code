// C++ program to traverse a unordered_map 
// using begin() and end() 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int arr[] = { 1, 1, 2, 1, 1, 3, 4, 3 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	unordered_map<int, int> m; 
	for (int i = 0; i < n; i++) 
		m[arr[i]]++; 

	// Printing of Unordered_MAP 
	cout << " Element Frequency" << endl; 
	for (auto i = m.begin(); i != m.end(); i++) 
		cout << i->first << "	 " << i->second << endl; 

	return 0; 
}
