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
	vector<ll> cnt;
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		cnt.assign(size*2,0LL);
	}
	
	void inc(ll i,ll x,ll lx,ll rx){
		if(rx-lx==1){
			cnt[x]++;
			return;
		}
		ll mid = (lx + rx)/2;
		if(i<mid) inc(i,2*x+1,lx,mid);
		else inc(i,2*x+2,mid,rx);
		cnt[x] = cnt[2*x+1] + cnt[2*x+2];
	}
	
	void inc(ll i){
		inc(i,0,0,size);
	}
	
	ll findSum(ll l, ll r,ll x,ll lx, ll rx){
		if(l>=rx || r<=lx) return 0;
		if(l<=lx && rx<=r) return cnt[x];
		
		ll mid = (lx+rx)/2;
		return findSum(l,r,2*x+1,lx,mid) + findSum(l,r,2*x+2,mid,rx);
		
	}
	
	ll findSum(ll l ,ll r){
		return findSum(l,r,0,0,size);
	}
};
void solve(){
	ll n;
	cin >> n;
	Tree t;
	t.init(100001);
	ll temp;
	f(i,0,n){
		cin >> temp;
		cout<<t.findSum(temp,100001)<<" ";
		temp--;
		t.inc(temp);
	}
	cout<<endl;
	
}
int main(){
	fastio;
	solve();
	
}


