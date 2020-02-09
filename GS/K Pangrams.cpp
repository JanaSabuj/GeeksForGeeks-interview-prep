/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/
// https://practice.geeksforgeeks.org/problems/k-pangrams/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);

	int t;
	cin >> t;

	while (t--) {
		string str;
		cin >> str;

		int k;
		cin >> k;

		int n = str.length();

		if (n < 26) {
			cout << "0" << endl;
			continue;
		}

		int alpha[26];
		memset(alpha, 0, sizeof(alpha));

		for (int i = 0; i < n; i++) {
			alpha[tolower(str[i]) - 'a']++;
		}

		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (!alpha[i])
				cnt++;
		}

		// min cnt changes has to be done
		if (cnt > k) // this works only if all inputs are a-zA-Zchars
			cout << "0" << endl;
		else
			cout << "1" << endl;


	}


	return 0;
}


