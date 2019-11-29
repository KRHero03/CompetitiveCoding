#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
	long n,ans=1;
	cin >> n;
	while(n--){
	    long p;
	    cin >> p;
	    ans=(ans*p)%MOD;
	}
	cout<<ans<<endl;
}
