
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
#define MOD 1000000007

int reverse(int n){
	int rev = 0;
	while(n>0){
		rev = rev*10 + n%10;
		n/=10;
	}

	return rev;
}

int modExp(int a, int b, int m){
	a =a%m;
	if(a==0 and b!=0) return 0;// 0^0=1 a special case
	// if(b==0) return 1;
	int res=1;
	while(b>0){
		if(b&1){
			res = res*a%m;
		}
		a=a*a%m;
		b>>=1;
	}

	return (res + m)%m;
}

signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	while(t--){
 		int x;
 		cin>>x;
 		int rev = reverse(x);
 		cout<< modExp(x, rev, MOD)<<endl;
 	}

	return 0;
}




