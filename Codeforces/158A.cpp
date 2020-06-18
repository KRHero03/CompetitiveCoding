#include <bits/stdc++.h>

#define ll long long int
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
void solve(){
	ll n,k;
	cin >> n >> k;
	vector <ll> v;
	ll x;
	f(i,0,n){
		cin >> x;
		v.pb(x);
	}
	ll ans=k;
	if(v[k-1]==0){
		fde(i,0,k-1){
			if(v[i]!=0){
				cout<<ans<<endl;
				return;
			}
			ans--;
		}
		cout<<ans<<endl;
		return;
	}
	f(i,k,n){
		if(v[i]==v[k-1])
			ans++;
	}
	cout<<ans<<endl;
	
	
}
int main(){
	solve();		
	
}
