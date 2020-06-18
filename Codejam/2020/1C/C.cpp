/*
	author: KRHero
	IDE: DevCPP		
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
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve(){
	ll n,d;
	cin >> n >> d;
	vector<ll> arr(n,0);
	for(ll& x: arr) cin >> x;
	unordered_map<ll,ll> umap;
	ll tMax = INT_MIN;
	for(auto i: arr){
		tMax = max(tMax,i);
		umap[i]++;
	}
	for(auto i: umap){
		if(i.S>=d){
			cout<<0<<endl;
			return;
		}
	}
	if(d==2){
		cout<<1<<endl;
		return;
	}
	if(d==3){		
		for(auto i: umap){
			if(i.S==2 && i.F<tMax){
				cout<<1<<endl;
				return;
			}
			if(umap[2*i.F]!=0){
				cout<<1<<endl;
				return;
			}
		}
		cout<<2<<endl;
		return;
		
	}
	
}
int main(){
	ll t;
	cin >> t;
	ll q= 1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();			
		q++;
	}	
}


