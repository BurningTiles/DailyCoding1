/**
 * Author  : BurningTiles
 * Created : 2021-04-03 21:56:45
 * Link    : BurningTiles.github.io
 * File    : Solution.cpp
**/

#include <bits/stdc++.h>
using namespace std;

signed main() {

	int tmp, i, j; // we will store i and j where the value in matrix is 1.
	for(int row=1; row<=5; row++)
		for(int col=1; col<=5; col++){
			cin >> tmp; // take matrix element at m[row][col] from input
			if(tmp){ // if it is 1 then store it's row and col where it occurs.
				i = row;
				j = col;
			}
		}
	
	cout << abs(3-i)+abs(3-j); // Output. required exchanges. 

	return 0;
}