#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll n , k;
	cin >> n >> k;
	string p[k];
	ll i;
	for(i=0;i<k;i++)
		cin>>p[i];
	ll x = n%k;
	if(x==0)
		x=k-1;
	else
		x--;
	cout<<p[x]<<endl;
}
