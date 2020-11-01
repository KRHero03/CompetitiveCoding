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

void solve(){
	ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll>> arr(m);
    for(auto &i: arr) cin >>i.F>>i.S;
    vector<ll> umap(n+1,0);
    ll ans = 0;
    for(auto i: arr){
        if(umap[i.F]==1 && umap[i.S]==1){
            ans++;
        }
        umap[i.F]=1;
        umap[i.S]=1;
    } 
	cout<<ans<<endl;
    return;
}
int main(){
	
	solve();
	
}


