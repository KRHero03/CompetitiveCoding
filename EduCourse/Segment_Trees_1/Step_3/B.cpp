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
	
	void set(ll i, ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sum[x] = v;
			return;
		}
		ll mid = (lx + rx)/2;
		if(i<mid) set(i,v,2*x+1,lx,mid);
		else set(i,v,2*x+2,mid,rx);
		
		sum[x] = sum[2*x+1] + sum[2*x+2];
	}
	
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	
	ll findOne(ll k,ll x,ll lx,ll rx){
		if(rx-lx==1) return lx;
		
		ll mid = (lx + rx)/2;
		if(sum[2*x+2]>k) return findOne(k,2*x+2,mid,rx);
		else return findOne(k-sum[2*x+2],2*x+1,lx,mid);
	}
	
	ll findOne(ll k){
		return 1 + findOne(k,0,0,size);
	}
};
void solve(){
	ll n;
	cin >> n;
	Tree t;
	t.init(n);
	f(i,0,n) t.set(i,1);
	vector<ll> arr(n);
	f(i,0,n) cin >> arr[i];
	vector<ll> ans(n);
	for(int i = n-1;i>=0;i--){
		ans[i] = t.findOne(arr[i]);
		t.set(ans[i]-1,0);
	}
	for(auto i: ans) cout<<i<<" ";
	cout<<endl;
	
}
int main(){
	fastio;
	solve();
	
}


