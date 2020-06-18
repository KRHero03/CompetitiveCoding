

#include <bits/stdc++.h>

using namespace std;
int main() {
	long n,i;
	cin >> n;
	long prefix[n];
	for(i=0;i<n;i++){
	    if(i==0)
	        cin>>prefix[i];
	    else{
	        long x;
	        cin>> x;
	        prefix[i]=prefix[i-1]+x;
	    }
	}
	long m=0;
	for(i=0;i<n;i++){
	    long j=0,p=2;
	    while(i+j+p<n){
	        j+=p;
	        p++;
	    }
	    //Debug:- cout<<i<<" "<<j<<endl;
	    if(i==0){
	        m=prefix[i+j];
	    }else{
	        m=max(prefix[i+j]-prefix[i-1],m);
	    }
	}
	cout<<m<<endl;
}
