
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

class Triplet {
public:
	int x, y, gcd;
};

Triplet exEuclid(int a, int b) {

	// if(b>a)
	// 	return exEuclid(b,a);

	if (b == 0) {
		Triplet ans;
		ans.gcd = a;
		ans.x = 1;
		ans.y = 0;
		return ans;
	}

	Triplet temp = exEuclid(b, a%b);
	Triplet ans;
	ans.gcd = temp.gcd;
	ans.x = temp.y;
	ans.y = temp.x - (a/b)*temp.y;

	return ans;
}


int MMT(int a, int m) {
	Triplet ans = exEuclid(a, m);
	if(ans.x < 0)
		return (ans.x + m) % m;
	return ans.x;
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int a, m;
		cin >> a >> m;
		if (__gcd(a, m) == 1)
			cout << MMT(a, m) << endl;
		else
			cout << -1 << endl;
	}


	return 0;
}




