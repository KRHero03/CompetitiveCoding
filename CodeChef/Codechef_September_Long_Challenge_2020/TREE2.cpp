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
    set<ll> s;
    f(i,0,n){
        ll temp;
        cin >> temp;
        if(temp==0) continue;
        s.insert(temp);
    }
    cout<<s.size()<<endl;
}
int main(){
    whilet(){
        solve();			
    }	
    
}


