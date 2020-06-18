
#include <bits/stdc++.h>

using namespace std;

int main() {
	long n;
	cin >> n;
	long i=0;
	for(i=3;i<n;i+=3){
	    n-=i;
	}
	if(n>(i/3))
	    cout<<"Motu"<<endl;
	else
	    cout<<"Patlu"<<endl;
}


