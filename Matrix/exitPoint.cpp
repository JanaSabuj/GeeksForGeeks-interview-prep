
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
 

void exitPoint(int A[21][21], int n, int m) {

	char dir[] = {'R', 'D', 'L', 'U'};
	int z = 0;
	char curr = dir[z % 4];
	int i=0,j=0;
	while (i<n and i >= 0 and j<m and j >= 0) {

		if (A[i][j] == 0) {
			if (curr == 'R')
				j++;
			if (curr == 'D')
				i++;
			if (curr == 'L')
				j--;
			if (curr == 'U')
				i--;
		}
		else {
			z++;
			curr = dir[z % 4];
			A[i][j] = 0;
		}

	}

	if (i < 0 ) i++;
	if (j < 0) j++;
	if (i >= n ) i--;
	if (j >= m) j--;

	cout<<i<<" "<<j<<endl;


}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int A[21][21];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < m; ++j)
			{
				/* code */
				cin >> A[i][j];
			}
		}

		exitPoint(A, n, m);
	}



	return 0;
}




