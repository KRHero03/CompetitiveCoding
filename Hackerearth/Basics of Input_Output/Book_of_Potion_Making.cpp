
#include <iostream>

using namespace std;

int main() {
	string x;
	cin >> x;
	if(x.size()!=10)
	    cout<<"Illegal ISBN"<<endl;
	else{
	    long ans=0,i=0;
	    for(i=0;i<x.size();i++){
	        long p=x[i]-48;
	        p*=(i+1);
	        ans+=p;
	    }
	    if(ans%11!=0)
	        cout<<"Illegal ISBN"<<endl;
	    else
	        cout<<"Legal ISBN"<<endl;
	}
}