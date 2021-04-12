/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

int KthSmallest(int a[], int size, int K){
	// First let's sort array to make work easy.
	// Easiest method is bubble sort so let's do it.
	for(int i=0; i<size-1; i++)
		for(int j=0; j<size-i-1; j++)
			if(a[j]>a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}

	// Now just return Kth element.
	// As we know array starts at 0 so return a[K-1];
	return a[K-1];
}

signed main() {

	int n, k;
	cin >> n;
	int arr[n];
	for(auto &x:arr) cin >> x;
	cin >> k;
	cout << KthSmallest(arr, n, k);

	return 0;
}

/*

Input:
6
7 10 4 3 20 15
3

Output:
7


Input:
5
7 10 4 20 15
4

Output:
15

*/