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
	vector<ll> ops;
	
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		ops.assign(size*2,0);
	}
	
	void max1(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return;
		if(l<=lx && rx<=r){
			ops[x] = max(ops[x],v);
			return;
		}
		ll mid = (lx + rx)/2;
		max1(l,r,v,2*x+1,lx,mid);
		max1(l,r,v,2*x+2,mid,rx);
		return;
	}
	
	void max1(ll l,ll r,ll v){
		max1(l,r,v,0,0,size);
	}
	
	ll get(ll i, ll x, ll lx, ll rx){
		if(rx-lx==1) return ops[x];
		
		ll res=0;
		ll mid = (lx + rx)/2;
		if(i<mid) res = max(res,get(i,2*x+1,lx,mid));
		else res = max(res,get(i,2*x+2,mid,rx));
		return max(res,ops[x]);
	}
	
	ll get(ll i){
		return get(i,0,0,size);
	}
};
void solve(){
	ll n,m;
	cin >> n >> m;
	Tree t;
	t.init(n);
	while(m--){
		ll op;
		cin >> op;
		if(op==1){
			ll l,r,v;
			cin >> l >> r >> v;
			t.max1(l,r,v);
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


