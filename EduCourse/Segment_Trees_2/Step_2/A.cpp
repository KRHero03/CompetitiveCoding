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
	vector<ll> mins,sums;
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		mins.assign(2*size,0);
		sums.assign(2*size,0);
	}
	
	void add(ll l,ll r,ll v,ll x,ll lx,ll rx){
		if(rx<=l || lx>=r) return;
		if(l<=lx && rx<=r){
			sums[x] +=v;
			return;
		}
		ll mid = (lx + rx)/2;
		add(l,r,v,2*x+1,lx,mid);
		add(l,r,v,2*x+2,mid,rx);
		mins[x] = min(mins[2*x+1] + sums[2*x+1],mins[2*x+2] + sums[2*x+2]);
		return;
	}
	
	void add(ll l, ll r,ll v){
		add(l,r,v,0,0,size);
	}
	
	ll getMin(ll l,ll r,ll x,ll lx,ll rx){
		if(rx<=l || lx>=r) return LLONG_MAX;
		if(l<=lx && rx<=r){
			return mins[x];
		}
		ll mid = (lx + rx)/2;
		return sums[x]+min(getMin(l,r,2*x+1,lx,mid),getMin(l,r,2*x+2,mid,rx));
	}
	
	ll getMin(ll l,ll r){
		return getMin(l,r,0,0,size);
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
			t.add(l,r,v);
			for(auto i : t.mins) cout<<i<<" ";
			cout<<endl;
		}else{
			ll l,r;
			cin >> l >> r;
			cout<<t.getMin(l,r)<<endl;
		}
	}
	
}
int main(){
	
	solve();
	
}


