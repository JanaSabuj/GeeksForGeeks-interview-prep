
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

int paths(int n, int m){
	
	//if any co-ordinate is out of range
	if(n<0 or m<0)
		return 0;
	// if the origin is reached- only 1 way - either left se aya hoga or down se aya hoga
	if(n==0 and m==0)
		return 1;

	int x = paths(n-1,m);
	int y = paths(n,m-1);
	return x + y;
}


signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	while(t--){
 		int n,m;
 		cin>>n>>m;
 		cout<< paths(n,m) <<endl;
 	}

	return 0;
}




