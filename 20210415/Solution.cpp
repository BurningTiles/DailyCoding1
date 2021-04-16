/**
 * Author  : BurningTiles
 * Created : 2021-04-15 00:34:24
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

// For detailed and multiple solutions open below link.
// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays

#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
	set<int> s;
	for(int i=0; i<n; i++) s.insert(a[i]);
	for(int i=0; i<m; i++) s.insert(b[i]);
	return s.size();
}

int doIntersection(int a[], int n, int b[], int m) {
	int ans=0;
	map <int, int> x;
	for(int i=0; i<n; i++) x[a[i]]++;
	for(int i=0; i<m; i++)
		if(x[b[i]]){
			++ans;
			x[b[i]] = 0;
		}
	return ans;
}

signed main() {

	int n;
	cin >> n;
	int a[n];
	for(auto &x:a) cin >> x;
	int m;
	cin >> m;
	int b[m];
	for(auto &x:b) cin >> x;

	cout << doUnion(a,n,b,m) << " " << doIntersection(a,n,b,m);
	
	return 0;
}

/*

Input:
10
13 4 6 6 20 6 7 10 12 15 
8
8 16 6 2 16 14 19 9 

Output:
14 1

*/