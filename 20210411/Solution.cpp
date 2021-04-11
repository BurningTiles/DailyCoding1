/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

struct Pair {
	int min, max;
};

struct Pair MinMax(int a[], int size){
	struct Pair ans;
	ans.min=a[0];
	ans.max=a[0];
	for(int i=1; i<size; i++) {
		if(a[i]<ans.min) ans.min = a[i];
		if(a[i]>ans.max) ans.max = a[i];
	}
	return ans;
}

signed main() {

	int n;
	cin >> n;
	int arr[n];
	for(auto &x:arr) cin >> x;
	struct Pair ans = MinMax(arr, n);
	cout << "Min : " << ans.min << endl;
	cout << "Max : " << ans.max;

	return 0;
}