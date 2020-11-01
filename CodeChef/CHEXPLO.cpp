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

void dfs(vector<vector<int>>& edges,int node,int parent,int l,vector<int>&level){
    level[node] = l;

    for(auto& i :edges[node]){
        if(i==parent) continue;
        dfs(edges,i,node,l+1,level);
    }
}

void solve(){
	int n;
    scanf("%d",&n);

    vector<vector<int>> edges(n);
    f(i,0,n-1){
        int t,t1;  
        scanf("%d",&t);
        scanf("%d",&t1);
        t--;
        t1--;
        edges[t].pb(t1);
        edges[t1].pb(t);
    }
    vector<int> level(n,0);
    dfs(edges,0,-1,0,level);
    int idx = 0,maxLevel = 0;
    f(i,0,n){
        if(level[i]>maxLevel){
            idx = i;
            maxLevel = level[i];
        }
    }
    dfs(edges,idx,-1,0,level);
    maxLevel = 0;
    f(i,0,n){
        maxLevel = max(maxLevel,level[i]);
    }
    int ans = ceil((double)maxLevel/2.0);
    cout<<ans<<endl;
}

int main(){
	int t;
    scanf("%d",&t);
    while(t--){
		solve();			
	}	
	
}


