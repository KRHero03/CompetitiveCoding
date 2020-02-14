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
	cin >> n >> m;
	vector<vector<ll>> arr(n);
	ll x;
	f(i,0,n){
		f(j,0,m){
			cin >> x;
			arr[i].pb(x);
		}
	}
	ll ans = -INT_MAX;
	f(i,1,n-1){
		f(j,1,m-1){
			f(k,1,n-1){
				f(l,1,m-1){
				    if(abs(i-k)>=2 || abs(j-l)>=2){
					    ll temp = arr[i][j]*arr[k][l] + arr[i-1][j]*arr[k-1][l] + arr[i][j-1]*arr[k][l-1] + arr[i+1][j]*arr[k+1][l] + arr[i][j+1]*arr[k][l+1];
				        ans = max(ans,temp);
				        
				    }
				}
			}
		}
	}
	cout<<ans<<endl;
	return;
	
	
	
}
int main(){
	solve();			

	
}


