
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

int minCostPath(int A[51][51], int n) {
	int dp[51][51] = {0};
	dp[0][0] = A[0][0];

	for (int j = 1; j < n; ++j)
	{
		/* code */
		dp[0][j] = A[0][j] + dp[0][j - 1];
	}
	for (int i = 1; i < n; ++i)
	{
		/* code */
		dp[i][0] = A[i][0] + dp[i-1][0];
	}

	for (int i = 1; i < n; ++i)
	{
		/* code */
		for (int j = 1; j < n; j++) {
			dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i][j-1]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < n; j++) {
			// dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i][j-1]);
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return dp[n-1][n-1];
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int A[51][51];
		for (int i = 0; i < n; ++i)
		{
			/* code */

			for (int j = 0; j < n; j++) {
				cin >> A[i][j];
			}
		}

		cout << minCostPath( A , n) << endl;
	}

	


	return 0;
}




