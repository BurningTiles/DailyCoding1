/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n; // taking length of array

	int a[n]; // creating array of size n;
	int min = INT_MAX, max = INT_MIN; // min will contain min element, and max will contain max element.
	// INT_MAX and INT_MIN are defined in header limit.h which represent Maximum and Minimum possible value of integer respectively.
	
	for(int i=0; i<n; i++){
		cin >> a[i]; // take i-th element.
		if(a[i]<min) // If i-th element is smallest then set it as min.
			min = a[i];
		if(a[i]>max) // If i-th element is smallest then set it as max.
			max = a[i];
	}
	cout << min << " " << max << endl;
}

signed main() {

	int tt; // for test-case
	cin >> tt;

	while(tt--){ // a loop for test-case, you can also use for loop - for(int t=0; t<tt; t++) { //Your_code } 
		solve(); // Calling function to do other work.
	}

	return 0;
}