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
#define MAX 200005
using namespace std;

vector<ll>edges[MAX];
vector<ll>depth[MAX];
bool vis[MAX];
ll child[MAX] ,d[MAX];
void solve(){
	ll n,k,a,b;
	cin>>n>>k;
	for(int i=1;i<=n;i++) edges[i].clear() , vis[i] = false , depth[i].clear() , child[i] = 0;
	for(int i=1;i<n;i++){
		cin>>a>>b;
		edges[a].pb(b);edges[b].pb(a);
	}
	queue<int>bfs;while(!bfs.empty())bfs.pop();
	int temp = 0 , up = 0 , num = 0 ;
	bfs.push(1);
	vis[1] = true;
	while(!bfs.empty()){
		temp = bfs.size();
		while(temp--){
			up = bfs.front();
			d[up] = num;
			depth[num].pb(up);
			for(int i=0;i<edges[up].size();i++){
				if(!vis[edges[up][i]]){
					vis[edges[up][i]] = true;
					bfs.push(edges[up][i]);
				}
			}
			bfs.pop();
		}
		num++;
	}
	for(ll i=num-1;i>=0;i--){
		for(ll j=0;j<depth[i].size();j++){
			for(ll k=0;k<edges[depth[i][j]].size();k++){
				if(d[edges[depth[i][j]][k]] > d[depth[i][j]])child[depth[i][j]]+=child[edges[depth[i][j]][k]]+1;
			}
		}
	}
	fe(i,1,n) child[i]-=d[i];
	sort(child+1 , child+1+n);
	ll ans = 0;
	for(ll i=n;i>k;i--)ans+=(ll)child[i];
	cout<<ans<<endl;
	return;
}
int main(){
	
		solve();			
	
	
}
