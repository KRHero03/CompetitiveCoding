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
ll a[2002][2002],dp[2002][2002];
void solve(){    
  ll n,m,p;
  cin>>n>>m>>p;
  fe(i,1,n)
    fe(j,1,m){
        cin>>a[i][j];
        a[i][j]+=a[i][j-1];
	}
  memset(dp,-1,sizeof dp);
  fe(i,0,n)
  	dp[i][0]=0;
  fe(i,1,n){
    fe(j,1,p){
      fe(k,0,min((ll)j,m)){
      	if(dp[i-1][j-k]!=-1){
	        dp[i][j] = max(dp[i][j],dp[i-1][j-k]+a[i][k]);
	      }
	  }
	      
    }
  }
  cout<<dp[n][p]<<endl;
 
}
int main(){
	//freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;
	cin >> t;
	ll q=1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();
		q++;			
	}	
	
}


