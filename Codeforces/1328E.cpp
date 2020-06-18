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
vector <ll> parent,depth,tin,tout;
vector<vector<ll>> edges;
ll T=0;
void dfs(ll v,ll p,ll d){
	parent[v] = p;
	depth[v] = d;
	tin[v] = T++;
	for(auto i: edges[v]){
		if(i==p) continue;
		dfs(i,v,d+1);
	}
	tout[v] = T++;
}

ll check(ll u,ll v){
	return tin[u]<=tin[v] && tout[u]>=tout[v];
}

void query(){
	vector <ll> path;
	ll k,temp;
	cin >> k;
	f(i,0,k){
		cin >> temp;
		path.pb(temp);
	}
	ll u = path[0];
	f(i,0,k) if(depth[u]<depth[path[i]]) u = path[i];
	
	f(i,0,k){
		if(path[i]==u) continue;
		if(parent[path[i]]!=-1) path[i] = parent[path[i]];
	}
	f(i,0,k){
		if(!check(path[i],u)){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}
void solve(){
	ll n,m,temp,temp1;
	cin >> n >> m;
	parent = depth =  tin = tout = vector<ll>(n+1);
	edges = vector<vector<ll>>(n+1);
	
	f(i,0,n-1){
		cin >> temp >> temp1;
		edges[temp].pb(temp1);
		edges[temp1].pb(temp);
	}
	dfs(1,-1,0);
	while(m--){
		query();
	}
	
}
int main(){
	solve();
	
}


