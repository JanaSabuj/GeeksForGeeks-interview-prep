
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

#define M 100005
int phi[M+1];

void eulerPhi(){

	for (int i = 1; i <=M ; ++i)
	{
		/* code */
		phi[i]=i;
	}

	for(int i=2; i<=M; i++){

		if(phi[i] == i){
			//if i is a prime
			phi[i]=i-1;

			for(int j=2*i; j<=M; j+=i){
				phi[j]= (phi[j]*(i-1))/i;
			}
		}
	}



}

signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;

	
	eulerPhi();// 1st preprocess the totients for the 10^5 numbers then just query for each test case in O(1)
 	
 	int t;
 	cin>>t;
 	while(t--){
 		int x;
 		cin>>x;
 		cout<<phi[x]<<endl;
 	}
 	

	return 0;
}




