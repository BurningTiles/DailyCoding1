/**
 * Author  : BurningTiles
 * Created : 2021-04-12 21:17:03
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void sortInLinear(int arr[], int size) {
	int x[6]={0}, ptr=0;
	for(int i=0; i<size; i++)
		x[arr[i]]++;
	for(int i=1; i<=5; i++)
		while(x[i]--)
			arr[ptr++] = i;
}

signed main() {

	int n;
	cin >> n;
	int arr[n];
	for(auto &x:arr) cin >> x;
	sortInLinear(arr, n);
	for(auto &x:arr) cout << x << " ";

	return 0;
}

/*

Input:
10
4 1 3 5 2 3 4 5 4 2

Output:
1 2 2 3 3 4 4 4 5 5

*/