/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
	int x[128]={0}; // Creating array with initial values zero.
	// You can also take array of 26 size but for each character you need to find array index.

	for(int i=0; i<s.size(); i++) { // for loop to traverse in string.
		if(x[s[i]]) { // Check if i-th charactered already occured or not.
			// If i-th character already came in string before then we will print it and return.
			cout << s[i] << endl;
			return;
		}
		else // If character occurs first time then add it in our array list.
			x[s[i]] = 1; // You can also do like ++x[s[i]];
	}

	// If for loop completes that means there is no repeating characters in given string.
	cout << "-1" << endl;
}

signed main() {

	int tt; // for test-case
	cin >> tt;

	while(tt--){ // a loop for test-case, you can also use for loop - for(int t=0; t<tt; t++) { //Your_code } 

		string str;
		cin >> str; // Taking string input from user for each test-case.

		solve(str); // Calling function to do other work.
	}

	return 0;
}