/*
	author: KRHero
	IDE: DevCPP		
*/

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=b;i>a;i--)
#define fde(i,a,b) for(int i=b;i>=a;i--)
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve(){
	ll n,m,k,temp;
	cin >> n >> m >> k;
	multiset<ll> r,g,b;
	ull ans = INT64_MAX;
	f(i,0,n){
		cin >> temp;
		r.insert(temp);
	}
	f(i,0,m){
		cin >> temp;
		g.insert(temp);
	}
	f(i,0,k){
		cin >> temp;
		b.insert(temp);
	}
	
	
	for(auto i: r){
		auto temp1 = g.lower_bound(i);
		auto temp2 = b.upper_bound(i);
		ll flag = 0;
		if(temp1 != g.end()) flag=1;
		if(temp2!=b.end()) flag=2;
		
		ll num1= *temp1;
		ll num2= *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
		
		temp1 = g.upper_bound(i);
		temp2 = b.lower_bound(i);
		flag=0;
		if(temp1!=g.end()) flag=1;
		if(temp2!=b.end()) flag=2;
		
		num1 = *temp1;
		num2 = *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
	}
	
	for(auto i: g){
		auto temp1 = r.lower_bound(i);
		auto temp2 = b.upper_bound(i);
		ll flag = 0;
		if(temp1 != r.end()) flag=1;
		if(temp2!=b.end()) flag=2;
		
		ll num1= *temp1;
		ll num2= *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
		
		temp1 = r.upper_bound(i);
		temp2 = b.lower_bound(i);
		flag=0;
		if(temp1!=r.end()) flag=1;
		if(temp2!=b.end()) flag=2;
		
		num1 = *temp1;
		num2 = *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
	}
	
	for(auto i: b){
		auto temp1 = g.lower_bound(i);
		auto temp2 = r.upper_bound(i);
		ll flag = 0;
		if(temp1 != g.end()) flag=1;
		if(temp2!=r.end()) flag=2;
		
		ll num1= *temp1;
		ll num2= *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
		
		temp1 = g.upper_bound(i);
		temp2 = r.lower_bound(i);
		flag=0;
		if(temp1!=g.end()) flag=1;
		if(temp2!=b.end()) flag=2;
		
		num1 = *temp1;
		num2 = *temp2;
		
		if(flag==2){
			ll temp = (i-num1)*(i-num1) + (num1-num2)*(num1-num2) + (i-num2)*(i-num2);
			if(temp>=0){
				if(ans>temp){
					ans = temp;
				}
			}
		}
	}
	cout<<ans<<endl;
	return;
	
	
}
int main(){	
	ll t;
	cin >> t;
	while(t--)
		solve();	
}


