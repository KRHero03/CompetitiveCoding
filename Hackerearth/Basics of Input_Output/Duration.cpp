
#include <bits/stdc++.h>

using namespace std;

int main() {
	long n;
	cin >> n;
	while(n--){
	    long sh,sm,eh,em;
	    cin >> sh>>sm>>eh>>em;
	    if(em>=sm)
	        cout<<eh-sh<<" "<<em-sm<<endl;
	    else{
	        eh--;
	        em+=60;
	        cout<<eh-sh<<" "<<em-sm<<endl;
	    }
	}
}