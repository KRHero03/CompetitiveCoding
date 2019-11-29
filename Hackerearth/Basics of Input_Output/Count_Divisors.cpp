
#include <bits/stdc++.h>

using namespace std;

int main() {
	long l,r,t;
	cin >> l >> r >> t;
	long ans=r/t - l/t;
	if(l%t==0){
	    ans++;
	}
	cout<<ans<<endl;
}
