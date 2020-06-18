

#include <bits/stdc++.h>

using namespace std;

int main() {
	string x;
	cin >> x;
	long i=0,ans=x.size(),invalid=0;
	if(x[x.size()-1]=='6')
        invalid=1;
	for(i=0;i<x.size()-1 && invalid==0;i++){
	    if(x[i]=='6'){
	        long j=i+1;
	        for(j=i+1;j<x.size();j++){
	            if(x[j]!='6'){
	                ans-=(j-i);
	                i=j;
	                break;
	            }
	        }
	    }
	    if(x[i]>54 || x[i]<49){
	        invalid=1;
	        break;
	    }
	}
	if(!invalid)
	    cout<<ans<<endl;
	else
	    cout<<-1<<endl;
}

