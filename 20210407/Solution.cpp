/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, sum=0, tmp;
	cin >> n; // Get size of array.
	while(n--){
		cin >> tmp; // take array element from user.
		sum += tmp; // add it into sum.
	}
	cout << sum << endl;
}

signed main() {

	int tt; // for test-case
	cin >> tt;

	while(tt--){ // a loop for test-case, you can also use for loop - for(int t=0; t<tt; t++) { //Your_code } 
		solve(); // Calling function to do other work.
	}

	return 0;
}