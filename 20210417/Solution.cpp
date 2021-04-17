/**
 * Author  : BurningTiles
 * Created : 2021-04-16 23:47:17
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

// For more details: https://en.wikipedia.org/wiki/Maximum_subarray_problem

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int a[], int n) {
	int ans=INT_MIN, currentSum = 0;
	for(int i=0; i<n; i++){
		currentSum += a[i];
		if(currentSum > ans) ans = currentSum;
		if(currentSum < 0) currentSum = 0;
	}
	return ans;
}

signed main() {

	int n;
	cin >> n;
	int a[n];
	for(auto &x:a) cin >> x;
	cout << maxSubarraySum(a,n);
	
	return 0;
}

/*

Input:
8
-2 -3 4 -1 -2 1 5 -3

Output:
7

*/