
#include <bits/stdc++.h>

using namespace std;

int main() {
	string x;
	cin >> x;
	long i,k;
	cin >> k;
	for(i=0;i<x.size();i++){
	    long p=x[i];
	    if(p>=65&&p<=90){
	        p+=(k%26);
	        if(p>90){
	            p-=26;
	        }
	    }else if(p>=97 && p<=122){
	        p+=(k%26);
	        if(p>122){
	            p-=26;
	        }
	    }else if(p>=48&&p<=57){
	        p+=(k%10);
	        if(p>57){
	            p-=10;
	        }
	    }
	    x[i]=char(p);
	}
	cout<<x<<endl;
}