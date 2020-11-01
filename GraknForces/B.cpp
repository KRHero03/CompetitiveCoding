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
	ll n,k;
	cin >> n >> k;
	set<ll> s;
	f(i,0,n){
		ll t;
		cin >> t;
		s.insert(t);
	}
	if(k==1 && s.size()==1){
		cout<<1<<endl;
		return;
	}
	if(k==1){
		cout<<-1<<endl;
		return;
	}
	if(s.size()<=k){
		cout<<1<<endl;
		return;
	}
	ll ans = 1 + ceil((s.size()-k)/(double)(k-1));
	cout<<ans<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


