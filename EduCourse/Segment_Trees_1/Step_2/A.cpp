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
	vector<ll> seg,pref,suf,sum;
	void init(ll n){
		size = 1;
		while(size<n) size*=2;
		seg.assign(size*2,0LL);
		pref.assign(size*2,0LL);
		suf.assign(size*2,0LL);
		sum.assign(size*2,0LL);
	}
	
	void set(ll i,ll v,ll x,ll lx, ll rx){
		if(rx-lx==1){
			sum[x] = v;
			pref[x] = max(0LL,v);
			seg[x] = max(0LL,v);
			suf[x] = max(0LL,v);
			return;
		}
		
		ll mid = (lx+rx)/2;
		if(i<mid){
			set(i,v,2*x+1,lx,mid);
		}else{
			set(i,v,2*x+2,mid,rx);
		}
		sum[x] = sum[2*x+1]+sum[2*x+2];
		pref[x] = max(0LL,max(pref[2*x+1],sum[2*x+1]+pref[2*x+2]));
		suf[x] = max(0LL,max(suf[2*x+2],sum[2*x+2]+suf[2*x+1]));
		seg[x] = max(0LL,max(max(seg[2*x+1],seg[2*x+2]),pref[2*x+2]+suf[2*x+1]));
		
	}
	
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	
	ll findMaximumSegment(ll l,ll r,ll x,ll lx, ll rx){
		if(r<=lx || l>=rx) return 0;
		
		if(lx<=lx && rx<=rx) return seg[x];
		
		ll mid = (lx+rx)/2;
		
		return max(findMaximumSegment( l, r,2*x+1,lx,mid) , findMaximumSegment( l, r,2*x+2,mid,rx));
	}
	
	ll findMaximumSegment(ll l, ll r){
		return findMaximumSegment(l,r,0,0,size);
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
	cout<<t.findMaximumSegment(0,n)<<endl;
	while(m--){
		ll i,v;
		cin >> i >> v;
		t.set(i,v);
		cout<<t.findMaximumSegment(0,n)<<endl;	
	}
}
int main()
{
	fastio;
	solve();

    
}

