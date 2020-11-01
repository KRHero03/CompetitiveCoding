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
#define MAX 1000005
using namespace std;

ll fact[MAX];

ll mul(ll a,ll b){
    return (a%MOD * b%MOD)%MOD;
}

ll add(ll a,ll b){
    return (a + b)%MOD;
}

ll sub(ll a,ll b){
    return (a - b + MOD)%MOD;
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

ll inv(ll a){
    return binpow(a,MOD-2);
}

ll C(ll a, ll b){

    return mul(fact[a],mul(inv(fact[b]),inv(fact[a-b])));
}

void solve(){  
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &i: arr) cin >> i;
    sort(arr.rbegin(),arr.rend());
    ll i = 1;
    while(i<n && arr[i]==arr[i-1]) i++;
    ll ans = 1;
    if(i%2){
        ans = mul(ans,binpow(2,n));
        cout<<ans<<endl;
        return;
    }
    ans = mul(ans,binpow(2,n-i));
    ans = mul(ans,sub(binpow(2,i),C(i,i/2)));

    cout<<ans<<endl;
    return;
}
int main(){
    fact[0] = 1;
    fact[1] = 1;
    f(i,2,MAX){
        fact[i] = mul(i,fact[i-1]);
    }
    whilet(){
        solve();			
    }	
    
}


