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
	vector<ll> sum;
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		sum.assign(size*2,0LL);
	}
	
	void set(ll i, ll v, ll x,ll lx,ll rx){
		if(rx-lx==1){	
			sum[x] += v;
			return;
		}
		ll mid = (lx + rx)/2;
		if(i<mid) set(i,v,2*x + 1,lx,mid);
		else set(i,v,2*x+2,mid,rx);
		sum[x] = sum[2*x+1] + sum[2*x+2];
	}
	
	void set(ll i, ll v){
		set(i,v,0,0,size);
	}
	
	ll findSum(ll l,ll r,ll x,ll lx,ll rx){
		if(rx<=l || lx>=r) return 0;
		
		if(l<=lx && rx<=r) return sum[x];
		
		ll mid = (lx + rx)/2;
		return findSum(l,r,2*x+1,lx,mid) + findSum(l,r,2*x+2,mid,rx);
	}
	
	ll findSum(ll i){
		return findSum(0,i,0,0,size);
	}
};
void solve(){
	ll n,m;
	cin >> n >> m;
	Tree t;
	t.init(n+1);
	while(m--){
		ll op;
		cin >> op;
		if(op==1){
			ll l,r,v;
			cin >> l >> r >> v;
			t.set(l,v);
			t.set(r,-v);
		}else{
			ll i;
			cin >> i;
			cout<<t.findSum(i+1)<<endl;			
		}
	}
	
}
int main(){
	solve();
	
}


