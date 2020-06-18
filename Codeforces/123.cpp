#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;

int main(){
	ll k;
	cin >> k;
	ll sum=0;
	ll a=1;
	ll b=1;
	if(k==1)
		cout<<a<<endl;
	else if(k==2)
		cout<<a+b<<endl;
	else{
		sum = a+b;
		ll i;
		for(i=2;i<k;i++){
			ll temp = b;
			b = b + a;
			a = temp;
			sum += b;
			//Debug:- cout<<a <<" "<<b<<" "<<sum<<endl;
		}
		cout << sum << endl;
	}
}
