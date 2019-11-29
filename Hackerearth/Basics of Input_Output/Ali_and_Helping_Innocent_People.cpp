
#include <bits/stdc++.h>

using namespace std;

int main() {
	string x;
	cin >> x;
	long i=0,pass=1;
	long p,r,s,u;
    p=x[0]+x[1];
    r=x[3]+x[4];
    s=x[4]+x[5];
    u=x[7]+x[8];
    if(p&1!=0 ||r&1!=0 ||s&1!=0||u&1!=0 ||x[2]=='A'||x[2]=='E'||x[2]=='I'||x[2]=='O'||x[2]=='U'||x[2]=='Y')
        cout<<"invalid"<<endl;
    else
        cout<<"valid"<<endl;
    
}
