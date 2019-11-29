#include <bits/stdc++.h>

#define ll long long int
#define whilet() int t;scanf("%d",&t);while(t--)
using namespace std;
ll modularExponentiation(ll x,ll y,ll z){
	ll ans=x%z;
	ll res=1;
	while(y>0){
		if(y&1){
			res=((ans%z)*(res%z))%z;
		}
		ans = ((ans%z)*(ans%z))%z;
		//cout<<res<<" "<<y<<endl;
		y=y>>1;
	}
	return res;
	
}

int main(){
	int c;
	cin >> c;
	while(c--){
		ll x,y,n;
		cin >> x >> y >> n;
		cout<<modularExponentiation(x,y,n)<<endl;
	}
	cin >> c;
	
}
