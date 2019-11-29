#include <bits/stdc++.h>

#define ll long long int
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=b;i>a;i--)
#define fde(i,a,b) for(int i=b;i>=a;i--)
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;
ll exponentiation(ll n,ll p){
	ll a=n;
	ll res=1;
	while(p>0){
		if(p&1)	res=res*a;
		a=a*a;
		p>>=1;
	}
	return res;
}
void solve(){
	ll n;
	cin >> n;
	ll ans=0;
	ans = (ll)24*exponentiation(4,n-3) + (ll)(n-3)*36*(n-4>=0?exponentiation(4,n-4):0);
	cout<<ans<<endl;
	
	
	
}
int main(){
	solve();		
	
}
