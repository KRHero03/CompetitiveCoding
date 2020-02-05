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

# define INF 0x3f3f3f3f 

using namespace std;

class Graph 
{ 
    int V; 
  
    list< pair<int, int> > *adj; 
  
public: 
    Graph(int V);  
  
    void addEdge(int u, int v, int w); 
  
    void shortestPath(int s); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list< pair<int, int> >[V]; 
} 
  
void Graph::addEdge(int u, int v, int w) 
{ 
    adj[u].push_back(make_pair(v, w)); 
} 
  
void Graph::shortestPath(int src) 
{ 
    set< pair<int, int> > setds; 
  
    vector<int> dist(V, INF); 
  
    setds.insert(make_pair(0, src)); 
    dist[src] = 0; 
  
    while (!setds.empty()) 
    { 
        pair<int, int> tmp = *(setds.begin()); 
        setds.erase(setds.begin()); 
  
        int u = tmp.second; 
  
        list< pair<int, int> >::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
        { 
            int v = (*i).first; 
            int weight = (*i).second; 
  
            if (dist[v] > dist[u] + weight) 
            { 
                if (dist[v] != INF) 
                    setds.erase(setds.find(make_pair(dist[v], v))); 
  
                dist[v] = dist[u] + weight; 
                setds.insert(make_pair(dist[v], v)); 
            } 
        } 
    } 
  
  	if(dist[V-1]!=INF)
  		cout<<dist[V-1]<<endl;
  	else
	  	cout<<-1<<endl;
} 
  
void solve(){
	ll n,k;
	cin >> n >> k;
	Graph g(n); 
	string temp;
	f(i,0,n){
		cin >> temp;
		f(j,0,temp.size()){
			if(j==i)
				continue;
			if(temp[j]=='1'){
				ll dist = i>j?i-j:j-i;
				if(dist<=k){
    				g.addEdge(i,j,1); 
				}
			}
		}
	}
	g.shortestPath(0); 
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
