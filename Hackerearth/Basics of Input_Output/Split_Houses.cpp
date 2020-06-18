

#include <bits/stdc++.h>

using namespace std;

int main() {
	long i,pass=1;
	cin >> i;
	string s;
	cin >> s;
	for(i=0;i<s.size();i++){
	    if(s[i]=='H' && s[i+1]=='H'){
	        pass=0;
	        break;
	    }
	    if(s[i]=='.')
	        s[i]='B';
	}
	if(pass==1)
	    cout<<"YES"<<endl<<s<<endl;
	else
	    cout<<"NO"<<endl;
}


