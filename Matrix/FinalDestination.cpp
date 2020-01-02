#include<iostream>
#include<cstdio>

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--){
	int a,b;
	cin>>a>>b;

	int x;
	cin>>x;

	int minSteps = abs(a) + abs(b);
	if(x < minSteps)
	    cout << 0 <<endl;
	else{
	    if((x - minSteps)%2 == 0)
	        cout << 1 <<endl;
	   else
	      cout << 0 <<endl;
	}

	}


	return 0;
}
