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
vector <int> parent(MAX),depth(MAX),eular,firstOcc(MAX),tDepth;
vector<unordered_map<int,int>> nodeWeights(MAX);

int lookup[100005][17];
int ptr=0;
int n,temp,temp1;	

ll add(ll a,ll b){
	return (a%MOD + b%MOD)%MOD;
}
ll mul(ll a ,ll b){
	return (a%MOD * b%MOD)%MOD;
}
	
void setNodeWeight(int node,int weight){
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

void addEdge(int a,int b){
	edges[a].pb(b);
	edges[b].pb(a);
}

void dfsutil(int node,int p,int d){
	if(firstOcc[node]==-1) firstOcc[node] = ptr;
	
	parent[node] = p;
	depth[node] = d;
	//eular.pb(node);	
	ptr++;
	for(auto i: edges[node]) cout<<i<<" ";
	cout<<endl;
	for(auto n:edges[node]){
		if(n==p) continue;
		dfsutil(n,node,d+1);	
		//eular.pb(node);
		ptr++;
		
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

void makeArr(){
	for(auto i: eular) tDepth.pb(depth[eular[i]]);
	return;
}

void preprocessSparse(){
	int n = tDepth.size();
	 f(i,0,n)
        lookup[i][0] = i; 
  
    for (int j=1; (1<<j)<=n; j++){ 
        for (int i=0; (i+(1<<j)-1) < n; i++){  
            if (tDepth[lookup[i][j-1]] < tDepth[lookup[i + (1<<(j-1))][j-1]]) 
                lookup[i][j] = lookup[i][j-1]; 
            else
                lookup[i][j] = lookup[i + (1 << (j-1))][j-1];       
        } 
    } 
}

int lca(int s,int d){
	if(s==d)  return depth[s];
	int R = firstOcc[d],L = firstOcc[s];
	if(L>R) swap(R,L);
	
	int j = (int)log2(R-L+1); 
  
    if (tDepth[lookup[L][j]] <= tDepth[lookup[R - (1<<j) + 1][j]]) 
    	return tDepth[lookup[L][j]]; 
  
   	else return tDepth[lookup[R - (1<<j) + 1][j]]; 
}

ll query(int s,int d){
	
	int caDepth = lca(s,d);
	unordered_map<ll,ll> tumap;
	int o = s;
	while(depth[o]!=caDepth){
		for(auto i: nodeWeights[o]){
			tumap[i.F] = add(tumap[i.F],i.S);
		}
		o = parent[o];
	}
	for(auto i: nodeWeights[o]){
		tumap[i.F] = add(tumap[i.F],i.S);
	}
	o = d;
	while(depth[o]!=caDepth){
		for(auto i: nodeWeights[o]){
			tumap[i.F] = add(tumap[i.F],i.S);
		}
		o = parent[o];
	}
	
	ll ans = 1;
	for(auto i: tumap){
		ans = mul(ans,add(i.S,1));
	}
	return ans;
}




void solve(){	
	f(i,0,MAX){
		firstOcc[i]=-1;
		parent[i]=0;
		depth[i]=0;
		edges[i].clear();
		nodeWeights[i].clear();		
	}
	
	tDepth.clear();
	eular.clear();
	ptr=0;	
	
	scanf("%d",&n);
	
	f(i,0,n-1){
		
		scanf("%d %d",&temp,&temp1);
		temp--;
		temp1--;
		addEdge(temp,temp1);
	}	
	f(i,0,n){
		scanf("%d",&temp);
		setNodeWeight(i,temp);
	}
	
	dfs();	
	//cout<<"DONE"<<endl;
	return;
	
	makeArr();	
	preprocessSparse();
	int q;
	scanf("%d",&q);
	while(q--){
		int src,dest;
		scanf("%ld %ld",&src,&dest);
		src--;
		dest--;
		
		ll num = query(src,dest);
		printf("%ld\n",num);
	}
	
	
}
int main(){	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	whilet(){
		solve();			
	}	
	
}


