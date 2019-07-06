
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

void boolMatrix(int A[][1001], int n, int m) {

	// std::vector<bool> vi;
	// std::vector<bool> vj;
	bool vi[n];
	bool vj[m];
	memset(vi,false,sizeof(vi));
	memset(vj,false,sizeof(vj));

	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {
			if (A[i][j] == 1) {
				// vi.push_back(i);
				// vj.push_back(j);
				vi[i]=true;
				vj[j]=true;
			}
		}
	}


	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {

			// if (binary_search(vi.begin(), vi.end(), i) or binary_search(vj.begin(), vj.end(), j))
			if(vi[i] == true or vj[j] ==true)
				cout << 1 << " ";
			else
				cout << 0 << " ";

		}
		cout << endl;
	}

}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int A[1001][1001];

		for (int i = 0; i < n; ++i)
		{
			/* code */

			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
			}
		}

		boolMatrix(A, n, m);
	}



	return 0;
}




