
#include <bits/stdc++.h>

using namespace std;

int main() {
	long n;
	vector <long> s;
	while(true){
	    cin >> n;
	    if(n==42)
	        break;
	    s.push_back(n);
	}
	long i=0;
	for(i=0;i<s.size();i++){
	    cout<<s[i]<<endl;
	}
}

