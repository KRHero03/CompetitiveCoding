
#include <bits/stdc++.h>

using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--){
	    long m,n,s,p=0,q=0;
	    cin >> m >> n;
	    cin >> s;
	    while(s--){
	        long a,b;
	        cin >> a >> b;
	        p+=a;
	        q+=b;
	    }
	    cout<<min(m,n)*max(p,q)+max(m,n)*min(p,q)<<endl;
	}
}
