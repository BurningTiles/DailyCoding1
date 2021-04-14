/**
 * Author  : BurningTiles
 * Created : 2021-04-13 21:20:50
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int a[], int size) {
	// Two pointer approach.
	int l=0, r=size-1; // Left and Right pointers.
	while(l<r){
		if(a[l]<0) ++l;
		else if(a[r]>0) --r;
		else swap(a[l++],a[r--]);
	}
}

void rearrange1(int a[], int size) {
	// Second method.
	int j=0;
	for(int i=0; i<size; i++) {
		if(a[i]<0) {
			if(i!=j)
				swap(a[i],a[j]);
			j++;
		}
	}
}

signed main() {

	int n;
	cin >> n;
	int arr[n];
	for(auto &x:arr) cin >> x;
	rearrange(arr, n);
	for(auto &x:arr) cout << x << " ";

	return 0;
}

/*

Input:
10
-11 17 -2 -13 -15 16 20 2 14 -18

Output: (Your output can be different)
-11 -18 -2 -13- 15 16 20 2 14 17

*/