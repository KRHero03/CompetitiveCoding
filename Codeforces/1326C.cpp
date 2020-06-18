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

void solve(){
	ll n,k;
	cin >> n >> k;
	vector <ll> p(n);
	for(ll& x: p) cin >> x;
	vector <ll> arr;
	f(i,0,n){
		if(p[i]>n-k){
			arr.pb(i);
		}
	}
	
	ll ans = 0;
	ans = ((n*(n+1))/2) - (((n-k)*(n-k+1))/2);
	ll ans1 = 1;
	ll size = arr.size();
	for(int i = size;i>=1;i--){		
		arr[i] = arr[i] - arr[i-1];
	}
	f(i,1,size){
		
		ans1 = (ans1%MOD * (arr[i]%MOD)%MOD)%MOD;
	}
	cout<<ans<<" "<<ans1<<endl;
	
	
}
int main(){
	
	solve();			

	
}


