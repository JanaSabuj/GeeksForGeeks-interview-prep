/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/minimum-initial-energy-required-to-cross-street/

int main() {
	freopen("input.txt", "r", stdin);

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int minEnergy = 0;
		int sum = 0;
		bool isNeg = false;
		for(int i = 0; i < n; i++){
			sum += arr[i];
			
			if(sum <= 0){
				minEnergy += abs(sum) + 1;
				sum = 1;
				isNeg = true;
			}
		}

		cout << ((isNeg) ? minEnergy : 1 )<< endl;
	}

	return 0;
}


