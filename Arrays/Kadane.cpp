#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

#define int long long int

using namespace std;
signed main()
 {
	//code
	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int ans=LLONG_MIN;
	    int sum=0;
	    
	    //for all negative- maintain a max value and a bool isallneg
	    bool isAllNeg=true;
	    int maxi=LLONG_MIN;
	    
	    for(int i=0; i<n; i++){
	        
	        maxi=max(maxi,arr[i]);
	        
	        if(arr[i]>0)
	            isAllNeg=false;
	             
	        sum+=arr[i];
	        
	        ans=max(ans,sum);
	        
	        if(sum<0){
	            
	            sum=0;
	        }
	        
	    }
	    
	     if(isAllNeg)
	            cout<<maxi<<endl;
	        else
	            cout<<ans<<endl;
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}