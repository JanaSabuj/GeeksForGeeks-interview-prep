
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

bool isSafe(int i, int j, int n) {
	if (i<0 or j<0 or i >= n or j >= n)
		return false;

	return true;
}


int maxCost(int A[21][21], int n) {

	int dp[21][21];

	for (int j = 0; j < n; j++) {
		dp[0][j] = A[0][j];
	}

	for (int i = 1; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < n; j++) {
			int ans = INT_MIN;
			if (isSafe(i - 1, j - 1, n))
				ans = max(ans, dp[i - 1][j - 1]);
			if (isSafe(i - 1, j, n))
				ans = max(ans, dp[i - 1][j]);
			if (isSafe(i - 1, j + 1, n))
				ans = max(ans, dp[i - 1][j + 1]);


			dp[i][j] = ans + A[i][j];

		}
	}

	int soln = INT_MIN;
	for (int j = 0; j < n; j++) {
		if (dp[n - 1][j] > soln)
			soln = dp[n - 1][j];
	}

	return soln;

}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int A[21][21];
		for (int i = 0; i < n; ++i)
		{
			/* code */

			for (int j = 0; j < n; j++) {
				cin >> A[i][j];
			}
		}

		cout << maxCost(A, n) << endl;
	}

	return 0;
}




