
#include <bits/stdc++.h>

using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--){
	    long x;
	    cin >> x;
	    long p=(x-12)/12;
	    long facing= (2*p+1)*12 + 1 - x;
	    if(x%6==0 || x%6==1)
	        cout<<facing<<" "<<"WS"<<endl;
	    else if(x%6==3 || x%6==4)
	        cout<<facing<<" "<<"AS"<<endl;
	    else
	        cout<<facing<<" "<<"MS"<<endl;
	}
}

