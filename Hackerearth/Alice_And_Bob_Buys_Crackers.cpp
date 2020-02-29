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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
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
	ll n,temp;
	cin >> n;
	vector<ll> v;
	f(i,0,n){
		cin >> temp;
		v.pb(temp);
	}
	ll loop = pow(2,n) - 1;
	unordered_map<ll,ll> umap;
	fe(i,0,loop){
		ll sum = 0;
		ll p = 0;
		while(i>0){
			if((i&1)==1){
				sum +=v[p];
			}
			i = i>>1;
			
		}
		umap[sum] = 1;
	}
	ll ans = 0;
	for(auto i:umap){
		if(i.F%2==0){
			ans++;
		}
	}
	cout<<ans<<endl;
	return;
	
	
}
int main(){
	solve();	
}


