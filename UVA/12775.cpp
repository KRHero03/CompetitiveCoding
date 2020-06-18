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
ll gcd(ll n,ll m){
	return m?gcd(m,n%m):n;
}
void solve(int q){
	int a,b,c,p;
	cin >> a >> b >> c >> p;
	ll GCD=gcd(gcd(a,b),c);
	a/=GCD;
	b/=GCD;
	c/=GCD;
	p/=GCD;
	int dp[p+1];

	memset(dp,0,sizeof(dp));
	
	dp[0]=1;
	
	fe(i,a,p) dp[i]+=dp[i-a];
	fe(i,b,p) dp[i]+=dp[i-b];
	fe(i,c,p) dp[i]+=dp[i-c];
	cout<<"Case "<<q<<": "<<dp[p]<<endl;
	
	
	
	
}
int main(){
	int q=0;
	whilet(){
		q++;
		solve(q);		
	}
}
