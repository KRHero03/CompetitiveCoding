

#include <bits/stdc++.h>

using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--){
	    long n;
	    cin >> n;
	    string x;
	    cin >> x;
	    long ans=0,i;
	    for(i=1;i<n;i++){
	        if(x[i]>57 || x[i]<48){
	            if(x[i-1]>=48 && x[i-1]<=57){
	                ans++;
	            }
	        }
	    }
	    if(x[n-1]>=48 && x[n-1]<=57)
	        ans++;
	    cout<<ans<<endl;
	}
}

