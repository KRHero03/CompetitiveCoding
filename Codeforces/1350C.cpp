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
#define MAX 200005
using namespace std;
ll primes[MAX];

multiset <ll> mset[MAX];

void sieve(){
	f(i,0,MAX) primes[i]=-1;
	primes[0] = 0;
	primes[1] = 1;
 
	for(ll i=2;i<MAX;i+=2)
		primes[i] = 2;
 
	for(ll i=3; i<MAX; i+=2){
		if(primes[i]==-1){
			primes[i]=i;
			for(ll j=i*i; j<MAX ; j+=i){
				if(primes[j] == -1)
					primes[j] = i;
			}
		}
	}
}
void solve(){
	ll n,temp;
	cin >> n;
	f(i,0,n){
		cin >> temp;
		unordered_map<ll,ll> umap;
		while(temp != 1){
			ll x = primes[temp];
			umap[x]++; 
			temp/=x;
		}
		for(auto i: umap){
			mset[i.F].insert(i.S);
		}
	}
	ll ans = 1;
	f(i,0,MAX){
		if(mset[i].size()<=n-2) continue;
		else if(mset[i].size()==n-1){
			ans = ans* pow(i,*(mset[i].begin()));
		}else{
			mset[i].erase(mset[i].begin());
			ans = ans* pow(i,*(mset[i].begin()));
		}
	}
	cout<<ans<<endl;
	return;
	
}
int main(){
	sieve();
	solve();
	
}


