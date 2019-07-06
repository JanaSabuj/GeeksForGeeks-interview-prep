
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

void boundaryElements(int A[][100], int n){

	for (int i = 0; i < n; ++i)
		{
			/* code */
			for(int j=0; j<n; j++){
				 
				 if(i==0 or i==(n-1) or j==0 or j==(n-1))
				 	cout<<A[i][j]<<" ";
				 
			}
		  
		}

}

signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;
 	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int A[100][100];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for(int j=0; j<n; j++){
				cin>>A[i][j];
			}
		}

		boundaryElements(A,n);
		cout<<endl;
	} 	

	return 0;
}




