
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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}

//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int freq(string str1, string str2, int n, int m, int count, int dp[][1007]) {

	if ((n == 0 and m == 0) or m == 0)
		return 1;

	if (n == 0)
		return 0;

	if(dp[n][m]>-1)
		return dp[n][m];

	if (str1[n - 1] == str2[m - 1]) {
		dp[n][m] = freq(str1, str2, n - 1, m - 1, count,dp) + freq(str1, str2, n - 1, m, count,dp);
		return  dp[n][m];
	}
	else {
		dp[n][m] = freq(str1, str2, n - 1, m, count, dp);
		return dp[n][m];
	}

	// return count;

}



signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		string str1, str2;
		cin >> str1 >> str2;
		int count = 0;
		int dp[1007][1007];
		memset(dp,-1,sizeof(dp));
		cout << freq(str1, str2, n, m, count, dp) << endl;

	}


	return 0;
}




