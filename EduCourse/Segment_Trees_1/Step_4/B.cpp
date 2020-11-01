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
	vector<ll[2][2]> sum;
	ll r;
	void init(ll n,ll r){
		size = 1;
		while(size<n) size*=2;
		sum.assign(size*2,{{1,0},{0,1}});
		this->r =  r;
	}
	
	ll mul(ll a, ll b){
		return (a%r * b%r)%r;
	}
	ll add(ll a,ll b){
		return (a + b)%r;
	}
	
	ll** mul(ll arr[2][2],ll arr1[2][2]){
		ll ans[2][2] = {{1,0},{1,0}};
		ans[0][0] = add(mul(arr[0][0],arr1[0][0]),mul(arr[0][1],arr1[1][0]));
		ans[0][1] = add(mul(arr[0][0],arr1[0][1]),mul(arr[0][1],arr1[1][1]));
		ans[1][0] = add(mul(arr[1][0],arr1[0][0]),mul(arr[1][1],arr1[1][0]));
		ans[1][1] = add(mul(arr[1][0],arr1[0][1]),mul(arr[1][1],arr1[1][1]));		
		return ans;
	}
	
	void set(ll i,ll arr[2][2], ll x,ll lx,ll rx){
		if(rx-lx==1){
			sum[x] = arr;
			return;
		}
		ll mid = (lx + rx)/2;
		if(i<mid) set(i,arr,2*x+1,lx,mid);
		else set(i,arr,2*x+2,mid,rx);
		
		sum[x] = mul(sum[2*x+1],sum[2*x+2]);
	}
	
	void set(ll i, ll arr[2][2]){		
		set(i,arr,0,0,size);
	}
	
	ll** findSum(ll l,ll r,ll x,ll lx,ll rx){
		if(rx<=l || lx>=r) return {{1,0},{0,1}};
		if(l<=lx && rx<=r) return sum[x];
		
		ll mid = (lx + rx)/2;
		ll[2][2] a = findSum(l,r,2*x+1,lx,mid);
		ll[2][2] b = findSum(l,r,2*x+2,mid,rx);
		return mul(a,b);
	}
	
	ll** findSum(ll l,ll r){
		return findSum(l,r,0,0,size);	
	}
};
void solve(){
	ll r,n,m;
	cin >> r >> n >> m;
	Tree t;
	t.init(n,r);
	f(i,0,n){
		ll temp[2][2];
		f(j,0,2) f(k,0,2) cin >> temp[j][k];
		
		t.set(i,temp);
	}
	
	while(m--){
		ll l,r;
		cin >> l >> r;
		l--;
		ll[2][2] ans = t.findSum(l,r);
		f(i,0,2){
			f(j,0,2){
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
}
int main(){
	fastio;
	solve();	
}


