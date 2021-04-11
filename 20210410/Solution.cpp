/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size) {
	int tmp;
	for(int i=0; i<size/2; i++){
		tmp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = tmp;
	}
}

void reverseString(string &s) {
	char tmp;
	int n = s.size();
	for(int i=0; i<n/2; i++){
		tmp = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = tmp;
	}
}

// Do not modify main function.
signed main() {

	int n;
	cin >> n;
	int arr[n];
	for(auto &x:arr) cin >> x;
	reverseArray(arr, n);
	for(auto &x:arr) cout << x << " ";
	cout << endl;

	string s;
	cin >> s;
	reverseString(s);
	cout << s;

	return 0;
}
