/*
	author: KRHero
	IDE: DevCPP		
*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define ull unsigned long long int
#define MOD 998244353
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=b;i>a;i--)
#define fde(i,a,b) for(int i=b;i>=a;i--)
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832
 
ll power[200005];
ll fact[200005];
 
ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        ll q = a / m; 
        ll t = m; 
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 
ll C(ll n, ll k) {
    return (fact[n]*modInverse((fact[k]*fact[n-k])%MOD,MOD)) % MOD;
}
using namespace std;
void solve(){
	ll n,m;
	cin >> n >> m;
	ll ans = 0;
	
    ans = ((C(m,n-1)%MOD * (n-2)%MOD )%MOD * (n>2?power[n-3]:0)%MOD)%MOD;
    cout<<ans<<endl;
	
}
int main(){
	power[0] = 1;
    fact[0] = 1;
    f(i,1,200005){
    	power[i]= (2*power[i-1])%MOD,
        fact[i]=(i*fact[i-1])%MOD;
	}    
	solve();
}
 
