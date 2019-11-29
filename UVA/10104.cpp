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

ll gcdExtended(ll n, ll m,ll &x,ll &y){
	if(n==0){
		x=0;
		y=1;
		return m;
	}
	ll x1=INT_MAX,y1=INT_MAX;
	int g=gcdExtended(m%n,n,x1,y1);
	ll t,p;
	t=y1-(m/n)*x1;
	p=x1;
	if(abs(t)+abs(p)<=abs(x)+abs(y)){
		x=t;
		y=p;	
	}
	
	return g;
}

void solve(){
	ll n,m;
	ll x=INT_MAX,y=INT_MAX;
	while(cin >> n >> m){
		ll gcd=gcdExtended(n,m,x,y);
		cout<<x<<" "<<y<<" "<<gcd<<endl;
	}
	
	
	
}
int main(){
	solve();		
	
}
