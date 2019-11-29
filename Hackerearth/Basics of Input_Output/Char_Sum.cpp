

#include <iostream>

using namespace std;

int main() {
	string x;
	cin >> x;
	long i,ans=0;
	for(i=0;i<x.size();i++){
	    ans+=(int)x[i]-96;
	}
	cout<<ans<<endl;
}

