/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int setBits(int n){
	int ans = 0;
	while(n){
		ans += n & 1;
		n >>= 1;// right shift
	}

	return ans;
}

int BrianKernighan(int n){
	int cnt = 0;
	while(n){
		n = n & (n - 1);
		cnt++;
	}

	return cnt;
}

int main() {
	freopen("input.txt", "r", stdin);

	int n = 17;
	cout << setBits(n) <<endl;
	cout << BrianKernighan(n) <<endl;


	return 0;
}


