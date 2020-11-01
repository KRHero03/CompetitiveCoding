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
struct Tree{
	ll size;
	vector<pair<ll,ll>> ops;
	
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		ops.assign(size*2,{0,0});
	}
	
	void assign(ll l,ll r,ll v,ll x,ll lx,ll rx,ll n){
		if(lx>=r || rx<=l) return;
		if(l<=lx && rx<=r){
			ops[x] = {v,n};
 			return;
		}
		ll mid = (lx + rx)/2;
		assign(l,r,v,2*x+1,lx,mid,n);
		assign(l,r,v,2*x+2,mid,rx,n);
		return;
	}
	
	void assign(ll l,ll r,ll v,ll n){
		assign(l,r,v,0,0,size,n);
	}
	
	pair<ll,ll> get(ll i, ll x, ll lx, ll rx){
		if(rx-lx==1) return ops[x];
		
		pair<ll,ll> res;
		ll mid = (lx + rx)/2;
		if(i<mid) res = get(i,2*x+1,lx,mid);
		else res = get(i,2*x+2,mid,rx);
		if(res.S>ops[x].S) return res;
		return ops[x];
	}
	
	ll get(ll i){
		return get(i,0,0,size).F;
	}
};
void solve(){
	ll n,m;
	cin >> n >> m;
	Tree t;
	t.init(n);
	ll x = 0;
	while(m--){
		ll op;
		cin >> op;
		if(op==1){
			ll l,r,v;
			cin >> l >> r >> v;
			x++;
			t.assign(l,r,v,x);
		}else{
			ll i;
			cin >> i;
			cout<<t.get(i)<<endl;			
		}
	}
	
}
int main(){
	solve();	
}


