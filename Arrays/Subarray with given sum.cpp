#include<bits/stdc++.h>

using namespace std;
int main()
{
	//code
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);

	int t;
	cin >> t;
	while (t--) {

		int n, tar;
		cin >> n >> tar;

		int arr[n];

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> arr[i];
		}

		int sum = 0, k = 0;
		bool found = false;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			sum += arr[i];
			k++;

			if (sum > tar) {

				while (sum > tar) {
					sum -= arr[i - k + 1];
					k--;

				}

			}

			if (sum == tar) {
				cout << i - k + 1 + 1 << " " << i + 1 << endl;
				found = true;
				break;
			}

		}

		if (!found)
			cout << -1 << endl;


	}


	return 0;
}