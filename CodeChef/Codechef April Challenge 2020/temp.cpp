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
#define INF 0x3f3f3f3f
#define MAX 100005
using namespace std;


vector<vector<int>> edges(MAX);
vector <int> parent(MAX),depth(MAX),eular,firstOcc(MAX);
vector<unordered_map<int,int>> nodeWeights(MAX);
int ptr=0;
void setNodeWeight(ll node, ll weight);
void addEdge(ll a,ll b);
void dfsutil(ll node,ll p,ll d);
void dfs();
int lca(int s,int d);
ll query(int src,int dest);
ll add(ll a,ll b);
ll mul(ll a,ll b);
	

int n,temp,temp1;	

	
void setNodeWeight(ll node,ll weight){
	unordered_map<int,int> umap;
	for(ll i=2;i*i<=weight;i++){
		if(weight%i==0){
			ll temp=0;
			while(weight%i==0){
				temp++;
				weight/=i;
			}
			umap[i]=temp;
		}
	}
	if(weight>1) umap[weight]++;
	nodeWeights[node] = umap;
}

void addEdge(ll a,ll b){
	edges[a].pb(b);
	edges[b].pb(a);
}

void dfsutil(ll node,ll p,ll d){
	if(firstOcc[node]==-1) firstOcc[node] = ptr;
	
	
	parent[node] = p;
	depth[node] = d;
	eular.pb(node);	
	ptr++;
	for(auto n:edges[node]){
		if(n!=p){
			dfsutil(n,node,d+1);
			
			eular.pb(node);
			ptr++;
		}
	}
	return;
}

void dfs(){
	ll idx=0;
	f(i,0,n){
		if(edges[i].size()>1){
			idx=i;
			break;
		}
	}
	
	dfsutil(idx,-1,0);
	return;
}

int lca(int s,int d){
	if(s==d)  return s;
	ll lca=s;
	ll tDepth = depth[s];
	fe(i,firstOcc[s],firstOcc[d]){
		if(depth[eular[i]]<tDepth){
			tDepth = depth[eular[i]];
			lca = eular[i];
		}
	}
	return lca;
}

ll query(int s,int d){
	
	int commonAncestor = lca(s,d);
	unordered_map<ll,ll> tumap;
	int o = s;
	while(o!=commonAncestor){
		for(auto i: nodeWeights[o]){
			tumap[i.F] = add(tumap[i.F],i.S);
		}
		o = parent[o];
	}
	o = d;
	while(o!=commonAncestor){
		for(auto i: nodeWeights[o]){
			tumap[i.F] = add(tumap[i.F],i.S);
		}
		o = parent[o];
	}
	for(auto i: nodeWeights[commonAncestor]){
		tumap[i.F] = add(tumap[i.F],i.S);
	}
	ll ans = 1;
	for(auto i: tumap){
		ans = mul(ans,add(i.S,1));
	}
	return ans;
}

ll add(ll a ,ll b){
	return (a%MOD + b%MOD)%MOD;
}
ll mul(ll a, ll b){
	return (a%MOD * b%MOD)%MOD;
}
   



void solve(){	
	f(i,0,MAX){
		firstOcc[i]=-1;
		parent[i]=0;
		depth[i]=0;
		edges[i].clear();
		nodeWeights[i].clear();		
	}
	eular.clear();
	ptr=0;
	
	cin >> n;
	
	f(i,0,n-1){
		cin >> temp>>temp1;
		temp--;
		temp1--;
		addEdge(temp,temp1);
		addEdge(temp1,temp);
	}
	f(i,0,n){
		cin >> temp;
		setNodeWeight(i,temp);
	}
	
	dfs();
	
	int q;
	cin >> q;
	while(q--){
		int src,dest;
		cin >> src >> dest;
		src--;
		dest--;
		
		ll num = query(src,dest);
		cout<<num<<endl;
	}
	
	
}
int main(){	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	whilet(){
		solve();			
	}	
	
}


