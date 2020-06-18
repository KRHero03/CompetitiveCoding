
#include <iostream>

using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--){
	    string x,y;
	    cin >> x >> y;
	    long i=0,pass=1;
	    long* a=(long*)calloc(26,sizeof(long));
	    long* b=(long*)calloc(26,sizeof(long));
	    for(i=0;i<x.size();i++){
	        if(x[i]>=65 &&x[i]<=90)
	            a[x[i]-65]++;
	        else if(x[i]>=97 && x[i]<=122)
	            a[x[i]-97]++;
	    }
	    for(i=0;i<y.size();i++){
	        if(y[i]>=65 &&y[i]<=90)
	            b[y[i]-65]++;
	        else if(y[i]>=97 && y[i]<=122)
	            b[y[i]-97]++;
	    }
	    for(i=0;i<26;i++){
	        //Debug:- cout<<a[i]<<" "<<b[i]<<endl;
	        if(a[i]!=b[i]){
	            pass=0;
	            break;
	        }
	    }
	    if(pass==1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
}
