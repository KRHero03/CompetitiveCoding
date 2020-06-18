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
	ll n,temp;
	cin >> n;
	vector <ll> a,b;
	f(i,0,n){
		cin >> temp;
		a.pb(temp);
	}
	f(i,0,n){
		cin >> temp;
		b.pb(temp);
	}
	vector <pair<ll,ll>> has;
	f(i,0,n){
		if(i==0){
			if(a[i]==-1){
				has.pb({0,1});
			}else if(a[i]==1){
				has.pb({1,0});
			}else
				has.pb({0,0});
			continue;
		}
		if(a[i]==-1){
			has.pb({has[i-1].F,1});
		}else if(a[i]==1){
			has.pb({1,has[i-1].S});
		}else		
		 has.pb({has[i-1].F,has[i-1].S});
	}
	for(ll j =n-1;j>0;j--){
		if(b[j]==a[j]) continue;
		if(a[j]-b[j]>0){
			if(has[j-1].S!=1){
				cout<<"NO"<<endl;
				return;
			}
		}else{
			if(has[j-1].F!=1){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	if(a[0]!=b[0]){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	return;
	
	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


