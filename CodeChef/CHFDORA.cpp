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
void solve(){
	ll n,m;
	int x;
	scanf("%ld %ld",&n,&m);
	vector<vector<int>> arr(n);
	f(i,0,n){
		f(j,0,m){
			scanf("%d",&x);
			arr[i].pb(x);
		}
	}
	ll ans=0,p,len,temp;
	f(i,0,n){
		f(j,0,m){
			p = 1;
			
			while(i-p>=0 && i+p<n  && (j-p>=0 && j+p<m) &&  (arr[i-p][j]==arr[i+p][j]) && arr[i][j-p]==arr[i][j+p]){
				p++;
			}
			ans+= p;			
		}
	}
	printf("%ld \n",ans);

	
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
