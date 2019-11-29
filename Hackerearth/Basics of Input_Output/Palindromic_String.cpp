
#include <bits/stdc++.h>

using namespace std;
int isPalindrome(string x){
    long s=x.size();
    long i=0;
    while(i<s-i){
        if(x[i]!=x[s-i-1])
            return 0;
        i++;
    }
    return 1;
}
int main() {
	string x;
	cin >> x;
	if(isPalindrome(x))
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
}