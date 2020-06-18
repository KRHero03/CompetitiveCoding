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
void recurse(ll n,ll k){
	ll* dp = (ll*)calloc(n+1,sizeof(ll));
	ll ans=0,ansK = 0;
	fe(i,0,n){
		if(i==0){
			dp[i]=0;
			ans=0;
			continue;
		}
		if(i==1){
			dp[i]=1;
			ans++;
			continue;
		}
		fe(j,1,k){
			if(i-j<0)
				break;
			dp[i] = (dp[i]%MOD + dp[i-j]%MOD)%MOD;
		}
		if(i<=k){
			dp[i] = (dp[i] + 1)%MOD;
		}
	}
	cout<<dp[n]<<endl;
	
}
void solve(){
	ll n,k;
	cin >> n >> k;
	recurse(n-1,k);	
}
int main(){
	
	solve();		
	
}
