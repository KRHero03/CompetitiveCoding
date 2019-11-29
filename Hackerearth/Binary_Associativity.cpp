

#include <bits/stdc++.h>

using namespace std;
long getAns(long ans[],long x,long y){
    if(x==0 && y==0)
        return ans[0];
    else if(x==0 && y==1)
        return ans[1];
    else if(x==1 && y==0)
        return ans[2];
    else
        return ans[3];
}
int main() {
	long t;
	cin >> t;
	while(t--){
	    long ans[4];
	    cin >>ans[0]>>ans[1]>>ans[2]>>ans[3];
	    long i=0,j=0,k=0,pass=1;
	    for(i=0;i<=1;i++){
	        for(j=0;j<=1;j++){
	            for(k=0;k<=1;k++){
	                long p=getAns(ans,i,j);
	                long q=getAns(ans,j,k);
	                long r=getAns(ans,p,k);
	                long s=getAns(ans,i,q);
	                //Debug:- cout<<i<<" "<<j<<" "<<k<<" "<<r<<" "<<s<<endl;
	                if(r!=s){
	                    pass=0;
	                    break;
	                }
	            }
	            if(pass==0)
	                break;
	        }
	        if(pass==0)
	                break;
	    }
	    if(pass==0)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
}
