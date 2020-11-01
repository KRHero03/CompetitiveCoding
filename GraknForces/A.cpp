/*
	author: KRHero
	IDE: VSCode	
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
#define whilet() int t; cin >> t;while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve(){
	ll n;
	cin >> n;
	vector<ll> a(n),b(n),c(n);
	for(auto& i: a) cin >> i;
	for(auto& i: b) cin >> i;
	for(auto& i: c) cin >> i;
	vector<ll> p;
	f(i,0,n){
		if(i==0){
			p.pb(a[i]);
			continue;
		}
		if(i==n-1){
			if(p[0]!=a[i] && p[i-1]!=a[i]) p.pb(a[i]);
			else if(p[0]!=b[i] && p[i-1]!=b[i]) p.pb(b[i]);
			else p.pb(c[i]);
			continue;
		}
		if(a[i]!=p[i-1]) p.pb(a[i]);
		else if(b[i]!=p[i-1]) p.pb(b[i]);
		else p.pb(c[i]);
	}
	for(auto i: p) cout<<i<<" ";
	cout<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


