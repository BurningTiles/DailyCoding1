/**
 * Author  : BurningTiles
 * Created : 2021-04-16 14:11:36
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void rotate(int a[], int size) {
	int tmp = a[size-1];
	for(int i=size-1; i>0; i--)
		a[i] = a[i-1];
	a[0] = tmp;
}

signed main() {

	int n;
	cin >> n;
	int a[n];
	for(auto &x:a) cin >> x;
	rotate(a,n);
	for(auto &x:a) cout << x << " ";
	
	return 0;
}

/*

Input:
10
7 6 8 4 1 3 5 2 10 9

Output:
9 7 6 8 4 1 3 5 2 10

*/