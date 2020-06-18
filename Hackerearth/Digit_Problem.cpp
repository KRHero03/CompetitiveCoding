

#include <bits/stdc++.h>

using namespace std;

int main() {
	long x;
	string s;
	cin >> s >> x;
	long i=0;
	while(x>0){
	    if(s[i]!='9'){
	        s[i]='9';
	        x--;
	    }
	    i++;
	    if(i==s.size()-1)
	        break;
	}
	cout<<s<<endl;
}

