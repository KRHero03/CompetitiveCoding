

#include <bits/stdc++.h>

using namespace std;

int main() {
	long l,t;
	cin >> l >> t;
	while(t--){
	    long x,y;
	    cin >> x >> y;
	    if(x<l || y<l)
	        cout<<"UPLOAD ANOTHER"<<endl;
	    else if(x==y)
	        cout<<"ACCEPTED"<<endl;
	    else
	        cout<<"CROP IT"<<endl;
	}
}
