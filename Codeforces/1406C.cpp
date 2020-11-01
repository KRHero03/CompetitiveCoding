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
ll n,leaf,leafParent;
void dfs(ll node,ll parent, vector<vector<ll>>&edges, vector<ll>& nodes,vector<ll>&centroids){
    nodes[node] = 1;
    ll isC = 1;
    for(auto i: edges[node]){
        if(i==parent) continue;
        dfs(i,node,edges,nodes,centroids);
        nodes[node]+=nodes[i];
        if(nodes[i]>n/2) isC = 0;
    }
    if(n-nodes[node]>n/2)  isC = 0;
    if(isC) centroids.pb(node);
    return;
}

void dfs1(ll node,ll parent,vector<vector<ll>> &edges){

    if(edges[node].size()==1){
        leaf = node;
        leafParent = parent;
        return;
    }
    for(auto i: edges[node]){
        if(i==parent) continue;
        dfs1(i,node,edges);
    }
}
void solve(){
    cin >> n;
    vector<vector<ll>> edges(n+1);
    f(i,0,n-1){
        ll t1,t2;
        cin >> t1 >> t2;
        edges[t1].pb(t2);
        edges[t2].pb(t1);
    }
    vector<ll> centroids;
    vector<ll> nodes(n+1);
    dfs(1,-1,edges,nodes,centroids);
    if(centroids.size()==1){
        cout<<1<<" "<<edges[1][0]<<endl;
        cout<<1<<" "<<edges[1][0]<<endl;
        return;
    }
    dfs1(centroids[0],centroids[1],edges);
    cout<<leaf<<" "<<leafParent<<endl;
    cout<<centroids[1]<<" "<<leaf<<endl;
    return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}