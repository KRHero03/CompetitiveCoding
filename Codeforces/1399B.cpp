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
	vector<ll> a(n),b(n);
	f(i,0,n) cin >> a[i];
	f(i,0,n) cin >> b[i];

	ll mA = *min_element(a.begin(),a.end());
	ll mB = *min_element(b.begin(),b.end());
	f(i,0,n) a[i]-=mA;
	f(i,0,n) b[i]-=mB;
	ll ans = 0;
	f(i,0,n){
		ans += max(a[i],b[i]);
	}

	cout<<ans<<endl;
	return;	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


