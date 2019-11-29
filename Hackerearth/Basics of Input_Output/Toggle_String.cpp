
#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	long i=0;
	for(i=0;i<s.size();i++){
	    if(s[i]>=97){
	        s[i]=s[i]-32;
	    }else{
	        s[i]=s[i]+32;
	    }
	}
	cout<<s<<endl;
}

