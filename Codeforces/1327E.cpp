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

using namespace std;

ll dp[200001];
ll power[200001];

ll mul(ll x,ll y){
	return (x%MOD * y%MOD)%MOD;
}
ll add(ll x,ll y){
	return (x%MOD + y%MOD + MOD)%MOD;
}
ll sub(ll x,ll y){
	return (x%MOD - y%MOD + MOD)%MOD;
}
void solve(){
	ll n;
	cin >> n;
	f(i,0,n+1) dp[i]=0;
	power[0] = 1;
	f(i,1,200001){
		power[i] = (power[i-1]*10)%MOD;
	}
	ll sum = 10;
	ll sum1 = 20;
	dp[n] = 10;
	ll multiplier = 2;
	for(int i = n-1;i>0;i--){
		dp[i] = sub(mul(multiplier,power[multiplier]),sum1);
		sum = add(sum,dp[i]);
		sum1 = add(add(sum1,sum),dp[i]);
		multiplier++;
	}
	fe(i,1,n) cout<<dp[i]<<" ";
	cout<<endl;
	
}
int main(){	
	solve();			
		
	
}


