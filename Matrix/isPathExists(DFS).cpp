
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
// #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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

// int isPathExists(int A[21][21], int n, int i, int j, int dp[21][21]) {

// 	if (i<0 or i >= n or j<0 or j >= n)
// 		return 0;
// 	if (A[i][j] == 0)
// 		return 0;
// 	if (A[i][j] == 2)
// 		return 1;
// 	if(dp[i][j] == 0)
// 		return 1;
// 	if (isPathExists(A, n, i + 1, j,dp) or isPathExists(A, n, i - 1, j,dp) or isPathExists(A, n, i, j + 1,dp) or isPathExists(A, n, i, j - 1,dp))
// 		 {
// 		 	dp[i][j] = 1;
// 		 	return 1;
// 		 }
// 		else{
// 			dp[i][j] = 0;
// 		 	return 0;
// 		}

// }
int X[] = {0, -1, 0, 1};
int Y[] = {1, 0, -1, 0};

bool isSafe(int i, int j, int A[21][21], int n){
	if(i<0 or j<0 or i>=n or j>=n)
		return false;
	if(A[i][j] == 0 )
		return false;

	return true;
}

void isPathDFS(int A[21][21], int n, int cx, int cy, bool visited[21][21]) {

	visited[cx][cy] = true;

	for (int i = 0; i < 4; ++i)
	{
		/* code */
		for (int j = 0; j < 4; j++) {
			if (isSafe(cx + X[i], cy + Y[i], A,n)) {
				if (!visited[cx + X[i]][cy + Y[i]]) {
					isPathDFS(A,n,cx+X[i],cy+Y[i],visited);
				}
			}
		}
	}

}


void DFS(int A[21][21], int n) {

	int startx, starty, endx, endy;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < n; j++) {
			if (A[i][j] == 1) {
				starty = j;
				startx = i;
			}

			if (A[i][j] == 2) {
				endx = i;
				endy = j;
			}

		}
	}

	bool visited[21][21] ;
	memset(visited, false, sizeof(visited));

	isPathDFS(A, n, startx, starty, visited);

	if (visited[endx][endy])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}



signed main() {

	freopen("input.txt", "r", stdin);
	// crap;

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

		 DFS(A, n) ;
	}

	return 0;
}




