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
	ll lbase = (ll)pow(arr[n-1],1.0/(double)(n-1));
	ll ans = 0;
	for(auto i: arr) ans+=abs(i-1LL);

	ll low = 2,high = lbase+1;
	if(lbase>=1 && n>=47) high--;
	f(base,low,high+1){
		ll temp = 0;
		ll flag = 1;
		ll val = 1;
		
		f(i,0,n){
			temp+= abs(val-arr[i]);
			val*=base;
		}
		ans = min(ans,temp);
		
	}
	cout<<ans<<endl;
}
int main(){	
	solve();	
	
}


