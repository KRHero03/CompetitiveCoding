
#include <bits/stdc++.h>

using namespace std;

int main() {
	long ans=0,i=0,temp=1;
	string x;
	cin >> x;
	for(i=1;i<x.size();i++){
	    if(x[i]!=x[i-1]){
	        temp++;
	    }else{
	        ans=max(ans,temp);
	        temp=1;
	    }
	}
	ans=max(ans,temp);
	cout<<ans<<endl;
}
