

#include <bits/stdc++.h>

using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--){
	    long i,n;
	    cin >> n;
	    for(i=0;i<n;i++){
	        long j;
	        for(j=0;j<=i;j++)
	            cout<<"*";
	        for(j=0;j<(n-i-1)*2;j++)
	            cout<<"#";
	        for(j=0;j<=i;j++)
	            cout<<"*";
	        cout<<endl;
	    }
	    cout<<endl;
	}
}

