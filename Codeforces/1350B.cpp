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
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;
ll dp[100005];
vector<ll> a(100005);
ll findAns(vector<ll>& arr){
	f(i,0,100005) dp[i]=0;
	ll ans = 0;
	ll n = arr.size();
	f(i,0,n){
		dp[arr[i]] = 1; 
		for(int j=2;j*j<=arr[i];j++){
			if(arr[i]%j==0){
				if(a[arr[i]]!=a[j])
					dp[arr[i]] = max(dp[j]+1,dp[arr[i]]);		
				if(a[arr[i]]!=a[arr[i]/j])		
                	dp[arr[i]] = max(dp[arr[i]],dp[arr[i]/j] + 1); 
			}
		}
		if(arr[i]!=1 && a[arr[i]]!=a[1])
			dp[arr[i]] = max(dp[1]+1,dp[arr[i]]);
		ans = max(ans,dp[arr[i]]);
	}
	return ans;
}
void solve(){
	ll n,temp;
	cin >> n;
	vector<pair<ll,ll>> arr;
	f(i,0,n){
		cin >> temp;
		arr.pb({temp,i+1});
		a[i+1] = temp;
	}
	sort(arr.begin(),arr.end());
	vector<ll> idx;
	f(i,0,n){
		idx.pb(arr[i].S);
	}
	ll ans = findAns(idx);
	cout<<ans<<endl;
	
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


