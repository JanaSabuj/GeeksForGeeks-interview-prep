
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


signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	while(t--){
 		int n;
 		cin>>n;
 		std::vector<int> v;

 		for (int i = 0; i < n; ++i)
 		{
 			/* code */
 			for(int j=0; j<n; j++){
 				int x;
 				cin>>x;
 				v.push_back(x);
 			}
 		}

 		sort(v.begin(), v.end());

 		for(auto item: v)
 			cout<<item<<" ";
 		cout<<endl;
 	}

	return 0;
}




