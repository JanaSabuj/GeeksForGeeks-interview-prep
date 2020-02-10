/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/

#include <bits/stdc++.h>
using namespace std;

bool isSortedVowels(string str){
	char cur = (char)64; // 'A' starts from 65 - explicit type cast: char <- int  
	
	for(auto ch: str){
		if(ch == 'a' or ch == 'e' or ch=='i' or ch=='o' or ch=='u'){
			if(ch < cur)
				return false;
			else
				cur = ch;
		}
	}

	return true;
}

int main() {
	freopen("input.txt", "r", stdin);

	string str = "aabbbdideecc";
	cout << (isSortedVowels(str) ? "YES ! It is sorted." : "NO!!") << endl; 

	string str1 = "aabbbddeecc";
	cout << (isSortedVowels(str1) ? "YES ! It is sorted." : "NO!!") << endl; 


	return 0;
}


