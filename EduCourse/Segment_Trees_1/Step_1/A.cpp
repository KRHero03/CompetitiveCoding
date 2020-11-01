/*
	author: KRHero
	IDE: VSCode	
*/

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define fd(i, a, b) for (int i = b; i > a; i--)
#define fde(i, a, b) for (int i = b; i >= a; i--)
#define fastio   \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MID(s, e) (s + (e - s) / 2)
#define whilet()     \
    int t;           \
    scanf("%d", &t); \
    while (t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

struct Tree{
	
	ll size;
	vector<ll> sums;
	void init(ll n){
		size = 1;
		while(size<n) size *=2;
		sums.assign(size*2,0LL);
	}
	
	void set(ll i,ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			sums[x] = v;
			return;
		}
		ll mid = (lx + rx)/2;
		if(i<mid){
			set(i,v,2*x+1,lx,mid);
		}else{
			set(i,v,2*x+2,mid,rx);
		}
		sums[x] = sums[2*x+1]+ sums[2*x+2];		
	}
	
	void set(ll i, ll v){
		set(i,v,0,0,size);
	}
	
	ll sum(ll l,ll r,ll x,ll lx, ll rx){
		if(r<=lx || l>=rx) return 0;
		
		if(l<=lx && rx<=r) return sums[x];
		
		ll mid = (lx + rx)/2;
		return sum(l,r,2*x+1,lx,mid) + sum(l,r,2*x+2,mid,rx);
	}
	
	ll sum(ll l,ll r){
		return sum(l,r,0,0,size);
	}
};

void solve(){
	ll n,m,temp;
	cin >> n >> m;
	Tree t;
	t.init(n);
	f(i,0,n){
		cin >> temp;
		t.set(i,temp);
	}
	cout<<endl;
	while(m--){
		ll op;
		cin >> op;
		if(op==1){
			ll i,v;
			cin >> i >> v;
			t.set(i,v);
		}else{
			ll l,r;
			cin >> l >> r;
			cout<<t.sum(l,r)<<endl;
		}
	}
}
int main()
{
	fastio;
	solve();

    
}
