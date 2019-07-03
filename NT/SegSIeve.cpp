
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpolong long<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
// #define long long long long long long
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const long long INF=1e9+5;//billion
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//long long power(long long a,long long b,long long m){long long ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//long long power(long long a, long long b){long long ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

#define MAX 100007
std::vector<long long> primes;

void makeSieve() {
	bool isPrime[MAX + 1];
	memset(isPrime, true, sizeof(isPrime));

	isPrime[0] = false;
	isPrime[1] = false;

	for (long long i = 2; i * i <= MAX; i++) {
		if (isPrime[i]) {
			for (long long j = i * i; j <= MAX; j += i) {
				isPrime[j] = false;
			}
		}
	}

	primes.push_back(2);
	for(long long i=3; i<=MAX; i+=2){
		if(isPrime[i])
			primes.push_back(i);
	}
}

void segSieve(long long l, long long r){

	bool isPrime[r-l+1];
	memset(isPrime, true, sizeof(isPrime));

	for(long long i=0; primes[i]*primes[i]<=r; i++){
		long long currPr = primes[i];
		long long base = (l/currPr)*currPr;
		if(base<l) base+=currPr;

		for(long long j =base; j<=r; j+=currPr){
			isPrime[j-l]=false;
		}

		if(base == currPr)
			isPrime[base-l]=true;
	}

	int ans=1;
	int MOD = 1000000009 + 7;
	for(int i=l; i<=r; i++){
		if(isPrime[i-l])
			ans = (ans* i) % MOD;
			// ans = ans* (i%MOD);
	}
	cout<<ans%MOD<<endl;

}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	makeSieve();
	// for(auto x:primes)
	// 	cout<<x<<" ";
	long long t;
	cin>>t;

	while(t--){
		long long l,r;
		cin>>l>>r;
		segSieve(l,r);
	}

	return 0;
}




