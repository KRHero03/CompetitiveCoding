
#include <bits/stdc++.h>

using namespace std;

int main() {
	long ans=0,t;
	cin >> t;
	while(t--){
	    double r,x;
	    cin >> r >> x;
	    if(100*x>=2*r*22/7)
	        ans++;
	}
	cout<<ans<<endl;
}