#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
	//code
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			cin >> arr[i];
			sum += arr[i];
		}

		cout << ((n * (n + 1)) / 2) - sum << endl;

	}

	return 0;
}