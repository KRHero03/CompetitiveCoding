

#include <bits/stdc++.h>

using namespace std;

int main() {
	string x;
	cin >> x;
	long i=0;
	long ans=0;
	for(i=1;i<x.size();i++){
	    if(x[i]==x[i-1]){
	        ans++;
	    }else{
	        ans=1;
	    }
	   //Debug:- cout<<ans<<endl;
	    if(ans==6)
	        break;
	}
	if(ans!=6)
	    cout<<"Good luck!"<<endl;
	else
	    cout<<"Sorry, sorry!"<<endl;
}

