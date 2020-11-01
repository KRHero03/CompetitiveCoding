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
	
	void set(ll i, ll v, ll x,ll lx, ll rx ){
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
	
	ll findSum(ll l, ll r,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l) return 0;
		
		if(l<=lx && rx<=r) return sum[x];
		
		ll mid = (lx + rx)/2;
		
		return findSum(l,r,2*x+1,lx,mid) + findSum(l,r,2*x+2,mid,rx); 
	}
	
	
	ll findSum(ll l, ll r){
		return findSum(l,r,0,0,size);	
	}
};
void solve(){
	Tree t;
	ll n,temp;
	cin >> n;
	t.init(2*n);
	vector<ll> left(n,0), ans(n,0), pass(n,0);
	f(i,0,2*n){
		cin >> temp;
		temp--;
		if(pass[temp]==0){
			left[temp] = i;
			pass[temp] = 1;
		}else{
			ans[temp] = t.findSum(left[temp],i);
			t.set(left[temp],1);
		}
	}
	for(auto i: ans) cout<<i<<" ";
	cout<<endl;
	
}
int main(){
	solve();
	
}


