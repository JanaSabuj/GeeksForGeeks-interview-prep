/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/
// https://www.geeksforgeeks.org/pangram-checking/
#include <bits/stdc++.h>
using namespace std;

bool isPan(string str){
	int alpha[26];
	memset(alpha,0,sizeof(alpha));

	for(auto x: str){
		if(x >= 'A' and x <= 'Z')
			alpha[x - 'A']++;
		else if(x >= 'a' and x <= 'z')
			alpha[x - 'a']++;
	}

	for(int i = 0; i < 26; i++){
		if(!alpha[i])
			return false;
	}

	return true;
}

int main() {
	freopen("input.txt", "r", stdin);

	string str = "The quick brown fox jumps over the lazy dog";
	cout << ((isPan(str)) ? "YES!!!" : "NO!!!") <<endl;


	return 0;
}


