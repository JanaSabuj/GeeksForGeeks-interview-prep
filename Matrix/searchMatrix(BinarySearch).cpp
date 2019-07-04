
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

void bsearch(int A[], int n,  int key, int row) {

	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (A[mid] == key) {
			ans = mid;
			e = mid - 1;
		}
		else if (key < A[mid])
			e = mid - 1;
		else
			s = mid + 1;


	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << A[i] << " ";
	}
	if (ans != -1)
		cout << "Element found at position (" << row << "," << ans << ")" << endl;
	else
		cout << "Not Found" << endl;
	return;

}

void searchMatrix(int A[20][20], int n, int m, int key) {

	int s = 0;
	int e = n - 1;
	bool isBSearchCalled = false;

	while (s <= e) {

		int mid = (s + e) / 2;
		int firstElement = A[mid][0];
		int lastElement = A[mid][m - 1];

		if ( key >= firstElement and key <= lastElement ) {
			bsearch(A[mid], m, key, mid);
			isBSearchCalled = true;
			break;
		}

		else if (key < firstElement)
			e = mid - 1;
		else
			s = mid + 1;
	}

	if (!isBSearchCalled)
		cout << "Element not found" << endl;

}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int key;
		cin >> key;

		int A[20][20];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
			}
		}

		searchMatrix(A, n, m, key);
	}

	return 0;
}

//https://www.geeksforgeeks.org/search-in-a-sorted-2d-matrix-stored-in-row-major-order/




