
#include <bits/stdc++.h>

using namespace std;
long fact(long n){
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}

int main() {
	long n;
	cin >> n;
	cout<<fact(n)<<endl;
}
