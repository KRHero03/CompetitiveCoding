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
#define INF 0x3f3f3f
using namespace std;
ll mul(ll a,ll b){
    return (a%MOD * b%MOD)%MOD;
}

ll add(ll a,ll b){
    return (a + b)%MOD;
}

ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if((b&1)){
            res = mul(res,a);
        }
        b >>= 1;
        a = mul(a,a);
    }
    return res;
}


void solve(){  
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &i: arr) cin >> i;
    ll minAns = n,maxAns = 1;
    vector<vector<double>> edges(n,vector<double>(n,INF));
    f(i,0,n){
        f(j,i+1,n){
            if(arr[i]<=arr[j]) continue;
            edges[i][j] = (double)(j-i)/(double)(arr[i]-arr[j]);
            edges[j][i] = edges[i][j];
        }
    }
    f(i,0,n){
        priority_queue<pair<double,ll>,vector<pair<double,ll>>,greater<pair<double,ll>>> pq;
        vector<ll> visited(n,0);
        double time = 0;
        pq.push({0.00,i});
        while(!pq.empty()){
            pair<double,ll> p = pq.top();
            pq.pop();
            if(visited[p.S]) continue;
            visited[p.S] = 1;
            f(i,0,n){
                if(edges[p.S][i]!=INF && edges[p.S][i]>=p.F && !visited[i]){
                    pq.push({edges[p.S][i],i});
                }
            }
            //if(i==2) cout<<p.F<<" "<<p.S<<endl;
        }
        ll cnt = 0;
        for(auto i: visited) cnt+=i;
        minAns = min(minAns,cnt);
        maxAns = max(maxAns,cnt);
    }

    cout<<minAns<<" "<<maxAns<<endl;
    return;
}
int main(){
    whilet(){
        solve();			
    }	
    
}


