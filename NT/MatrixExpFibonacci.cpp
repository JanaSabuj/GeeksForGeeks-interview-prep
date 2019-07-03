
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

void multiply(int A[][2], int B[][2]) {
	int fV = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	int sV = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	int tV = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	int fthV = A[1][0] * B[0][1] + A[1][1] * B[1][1];

	A[0][0] = fV;
	A[0][1] = sV;
	A[1][0] = tV;
	A[1][1] = fthV;
}


void power(int A[][2], int n) {
	if (n == 0 or n == 1)
		return;

	power(A, n / 2);
	multiply(A, A);

	if (n & 1) {
		int M[2][2] = {{1, 1}, {1, 0}};
		multiply(A, M);
	}

	
}
	

int fib(int n) {
	if (n == 0 )
		return n;

	int A[2][2] = {{1, 1}, {1, 0}};
	power(A, n - 1);
	return A[0][0];
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		cout << fib(n) << endl;
	}



	return 0;
}




