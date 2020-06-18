

#include <bits/stdc++.h>

using namespace std;

int main() {
	long n,q;
	cin >> n>>q;
	long prefix[n],i;
	for(i=0;i<n;i++){
	    long x;
	    cin >> x;
	    if(i==0)
	        prefix[i]=x;
	    else
	        prefix[i]=prefix[i-1]+x;
	}
	while(q--){
	    long l,r;
	    cin >> l >> r;
	    l--;
	    r--;
	    long ans;
	    if(l-1>=0)
	        ans=(prefix[r]-prefix[l-1])/(r-l+1);
	    else
	        ans=prefix[r]/(r+1);
	    cout<<ans<<endl;
	}
}