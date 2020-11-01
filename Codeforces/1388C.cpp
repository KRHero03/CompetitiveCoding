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

void dfs(ll node,ll parent, vector<vector<ll>>& edges,vector<ll>&people, vector<ll> &p){
    people[node] = p[node];
    for(auto i: edges[node]){
        if(i==parent) continue;
        dfs(i,node,edges,people,p);
        people[node] += people[i];
    }
    return;
}

ll pass = 1;
ll dfs1(ll node,ll parent,vector<vector<ll>> &edges, vector<ll> &people, vector<ll> &h){
    ll n = (people[node] + h[node]);
    ll ans = 0;
    if(n<0 || n%2!=0) pass = 0;
    n/=2;
    if(n>people[node]) pass = 0;
    for(auto i: edges[node]){
        if(i==parent) continue;
        ans +=dfs1(i,node,edges,people,h);
    }
    if(ans>n) pass = 0;
    return n;

}
void solve(){
    pass = 1;
	ll n,m,temp,temp1;
	cin >> n >> m;
    vector<ll> p(n);
    f(i,0,n) cin >> p[i];
    vector<ll> h(n);
    f(i,0,n) cin >> h[i];
    vector<vector<ll>> edges(n);
    f(i,0,n-1){
        cin >> temp >> temp1;
        temp--;
        temp1--;
        edges[temp].pb(temp1);
        edges[temp1].pb(temp);
    }
    vector<ll> people(n,0);
    dfs(0,-1,edges,people,p);
	dfs1(0,-1,edges,people,h);

    if(pass){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


