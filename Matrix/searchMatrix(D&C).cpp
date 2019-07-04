
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

void searchMatrix(int A[20][20], int n, int m, int x) {

	if (n == 0 or m == 0) {
		cout << "Not found" << endl;
		return;
	}
	int small = A[0][0];
	int big = A[n - 1][m - 1];

	if (x<small and x>big) {
		cout << "Not found" << endl;
		return;
	}

	int i = 0, j = m - 1;//top left corner

	while (i<n and j >= 0) {

		if (A[i][j] == x) {
			cout << "Element found at position (" << i << "," << j << ")" << endl;
			return;
		}
		else if (x < A[i][j])
			j--;
		else
			i++;
	}

	cout << "Not found" << endl;
	return;

}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;
		int x;
		cin >> x;

		int A[20][20];
		for (int i = 0; i < n ; ++i)
		{
			/* code */
			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
			}

		}
		searchMatrix(A, n, m, x);
	}

	return 0;
}




//https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/