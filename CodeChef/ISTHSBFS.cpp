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
vector<ll> dist;
vector<bool> visited;
  
  
  
void Multisource_BFS(vector<vector<ll>>& graph,queue<ll> q) 
{ 
    while(!q.empty()) 
    { 
        int k = q.front(); 
        q.pop(); 
      
        for(auto i:graph[k]) 
        { 
            if(!visited[i]) 
            { 
      
                q.push(i); 
                dist[i] = dist[k] + 1;  
                visited[i] = true; 
            } 
        } 
    } 
} 
  
  
void nearestTown(vector<vector<ll>>& graph,ll n,vector<ll>& sources,ll s) 
{ 
    queue<ll> q; 
  
    for(ll i = 0;i < s; i++) 
    { 
        q.push(sources[i]); 
        visited[sources[i]]=true; 
    } 
  
    Multisource_BFS(graph,q); 
  
  
  
} 
  
void solve(){
	ll n,m,k;
    cin >> n >> m >> k;
    vector<vector<ll>> edges(n+1);
    dist.assign(n+1,0);
    visited.assign(n+1,0);
    f(i,0,m){
        ll t,t1;
        cin >> t >> t1;
        edges[t].pb(t1);
        edges[t1].pb(t);
    }
    vector<ll> sources;
    f(i,0,k){
        ll t;
        cin >> t;
        sources.pb(t);
    }
    nearestTown(edges,n,sources,sources.size());
    ll q;
    cin >> q;
    while(q--){
        ll t;
        cin >> t;
        if(!visited[t]){
            cout<<-1<<endl;
            continue;
        }
        cout<<dist[t]<<endl;

    }

}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


