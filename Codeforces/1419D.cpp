/*
	author: KRHero
	IDE: VSCode	
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
#define whilet() int t; cin >> t;while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve(){
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(auto& i: arr) cin >> i;
	sort(arr.begin(),arr.end());
	vector<ll> ans;
	ll low = 0,high = n/2;
	while(low<n/2 || high<n){
		if(low==n/2){
			ans.pb(arr[high]);
			break;
		}
		if(high==n){
			ans.pb(arr[low]);
			break;
		}
		ans.pb(arr[high]);
		ans.pb(arr[low]);
		low++;
		high++;
	}
	ll val = 0;
	f(i,0,n){
		if(i==0 || i==n-1) continue;
		if(ans[i]<ans[i+1] && ans[i]<ans[i-1]) val++;
	}
	cout<<val<<endl;
	for(auto i: ans) cout<<i<<" ";
	cout<<endl;
	
}

int main(){	
		solve();
}


