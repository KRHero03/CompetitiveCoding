
#include <bits/stdc++.h>

using namespace std;

int main() {
	long n;
	long x,y,p;
	cin >> n >> x >> y >> p;
	long i,j;
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        long m=min(p-abs(x-i),p-abs(y-j));
	        if(m<0)
	            m=0;
	        cout<<m<<" ";
	    }
	    cout<<endl;
	}
}

