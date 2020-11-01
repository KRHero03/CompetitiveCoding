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

ll p1 = 1LL*97*89*83*79*73*71*67*61*59*23;
ll p2 = 1LL*53*47*43*41*37*31*29*19*17*13*11*7*5*3*2;
void dfs(ll node, ll parent,vector<vector<ll>> &edges, vector<ll> &val,ll check){
    if(check%2==0)
        val[node]=p1;
    else
        val[node]=p2;
    for(auto i: edges[node]){
        if(i!= parent){
            dfs(i,node,edges,val,1-check);
        }
    }
    return;
}
void solve(){
	ll n,temp,temp1;
    cin >> n;
    vector<vector<ll>> edges(n);
    vector<ll> val(n,0);
    f(i,0,n-1){
        cin >> temp >> temp1;
        temp--;
        temp1--;
        edges[temp].pb(temp1);
        edges[temp1].pb(temp);
    }
    ll root = 0;
    f(i,0,n){
        if(edges[i].size()==1) {
            root = i;
            break;
        }
    }
    f(i,0,n) dfs(i,-1,edges,val,0);
    f(i,0,n) cout<<val[i]<<" ";
    cout<<endl;
    return;
	
}
int main(){
	whilet(){
		solve();			
	}	
	
}


