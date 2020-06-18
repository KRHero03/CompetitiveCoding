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
#define MAX 100005
using namespace std;
vector<ll> depth(MAX);
vector<vector<ll>> edges(MAX);
vector<ll> leaf,isLeaf(MAX);

ll temp2=0;

void dfs(ll node,ll parent){
	for(auto i: edges[node]){
		if(i!=parent){
			depth[i] = depth[node]+1;
			dfs(i,node);
		}
	}
}

void modifiedDFS(ll node,ll parent){
	ll temp=0;
	for(auto i: edges[node]){
		if(i!=parent){
			if(isLeaf[i]){
				temp++;
			}
		}		
	}
	if(temp>0) temp2+=temp-1;
	for(auto i: edges[node]){
		if(i!=parent) modifiedDFS(i,node);
	}
}

void solve(){
	ll n,temp,temp1;
	cin >> n;
	f(i,0,n) isLeaf[i]=0;
	f(i,0,n-1){
		cin >> temp >> temp1;
		temp--;
		temp1--;
		edges[temp].pb(temp1);
		edges[temp1].pb(temp);
	}
	
	f(i,0,n){
		if(edges[i].size()==1) {
			leaf.pb(i);
			isLeaf[i] = 1;
		}
	}
	
	ll idx;
	f(i,0,n){
		if(edges[i].size()>1){
			idx=i;
			break;
		}		
	}
	depth[idx]=1;
	dfs(idx,-1);
	
	ll oddDepth=0,evenDepth=0;
	for(auto i: leaf){
		if(depth[i]%2) {
			
			oddDepth++;
		}
		else evenDepth++;
	}
	ll min= oddDepth>0 && evenDepth>0?3:1;
	
	ll max=n-1;
	modifiedDFS(idx,-1);
	max-=temp2;
	
	cout<<min<<" "<<max<<endl;
	return;
	
	
	
}
int main(){
	
	solve();
	
}


