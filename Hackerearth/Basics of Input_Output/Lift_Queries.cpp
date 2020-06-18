#include <bits/stdc++.h>

using namespace std;

int main() {
	long x=0,y=7,t;
	cin >> t;
	while(t--){
	    long p;
	    cin >> p;
	    if(abs(x-p)>abs(y-p)){
	        cout<<"B"<<endl;
	        y=p;
	    }else if(abs(x-p)<abs(y-p)){
	        cout<<"A"<<endl;
	        x=p;
	    }else{
	        if(x<y){
	            cout<<"A"<<endl;
	            x=p;
	        }else{
	            cout<<"B"<<endl;
	            y=p;
	        }
	    }
	}
}

