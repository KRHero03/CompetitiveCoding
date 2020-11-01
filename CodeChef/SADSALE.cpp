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

int l;
vector<vector<int>> edge;

int timer;
vector<int> tin, tout;
vector<vector<int>> up;

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : edge[v]) {
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (ll i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root,int n) {
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}
void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 
void dfs(vector<vector<pair<int,int>>>& edges,int node,int parent,vector<ll>&sums,ll s){
    
    sums[node] = s;
    for(auto i: edges[node]){
        if(i.F==parent) continue;
        dfs(edges,i.F,node,sums,sums[node]+i.S);
    }

}

void solve(){
	int n,q,r;
    scanf("%d",&n);
    scanf("%d",&q);
    scanf("%d",&r);
    r--;
    vector<vector<pair<int,int>>> edges(n);
    edge.assign(n,vector<int>());
    f(i,0,n-1){
        int t,t1,t2;  
        scanf("%d",&t);
        scanf("%d",&t1);
        scanf("%d",&t2);
        t--;
        t1--;
        edges[t].pb({t1,t2});
        edges[t1].pb({t,t2});
        edge[t].pb(t1);
        edge[t1].pb(t);
    }
    vector<ll> sums(n+1,0);
    dfs(edges,r,-1,sums,0);
    preprocess(r,n);

    while(q--){
        int u,v;
        scanf("%d",&u);
        scanf("%d",&v);
        u--;
        v--;
        int LCA = lca(u,v);
        printf("%lld\n",(sums[u]-sums[LCA] + sums[v]-sums[LCA]));
    }


}
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
		solve();			
	}	
	
}


