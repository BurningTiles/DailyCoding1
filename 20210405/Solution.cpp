/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

signed main() {

	int n;
	cin >> n; // Take N from user
	
	int a[n], min[n], max[n];
	int currMin = INT_MAX, currMax = INT_MIN; // Set current min and max.

	for(int i=0; i<n; i++) { // Take array input. and find min max.
		cin >> a[i]; 
		if(a[i]<currMin) currMin = a[i]; // If a[i] is min then set in current minimum
		if(a[i]>currMax) currMax = a[i]; // If a[i] is max then set in current maximum
		min[i] = currMin; // Add currMin in min array which will represent minimum till i.
		max[i] = currMax; // Add currMax in max array which will represent maximum till i.
	}
	
	int q, i;
	cin >> q; // Take number of queries.
	while(q--) {
		cin >> i; // Take index for query q
		cout << min[i-1] << " " << max[i-1] << endl; // Print answer.
	}

	return 0;
}