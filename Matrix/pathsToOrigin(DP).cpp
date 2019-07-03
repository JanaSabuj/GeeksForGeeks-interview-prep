
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

int paths(int a, int b) {

	int n = b;
	int m = a;
	int dp[n + 1][m + 1];

	dp[0][0] = 0;

	for (int j = 1; j <= m; j++) {
		dp[0][j] =   1;
	}
	for (int i = 1; i <= n; i++) {
		dp[i][0] =   1;
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] ;
		}
	}

	// for (int i = 0; i <= n; i++) {
	// 	for (int j = 0; j <= m; j++) {
	// 		cout<< dp[i][j] <<" "; 
	// 	}
	// 	cout<<endl;
	// }
	return dp[n][m];

}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;
		cout << paths(n, m) << endl;
	}


	return 0;
}




