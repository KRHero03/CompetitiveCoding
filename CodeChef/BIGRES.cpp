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

using namespace std;

void solve(){
	ll n;
	cin >> n;
	ll p,q;
	vector <ll> x,h;
	f(i,0,n){
		cin >> p >> q;
		x.pb(p);
		h.pb(q);
	}
	sort(x.begin(),x.end());
	sort(h.begin(),h.end());
	vector <ll> tp;
	f(i,0,n){
		if(i==0){
			tp.pb(x[i+1]-x[i]);
			continue;
		}
		if(i==n-1){
			tp.pb(x[i]-x[i-1]);
			continue;
		}
		tp.pb(x[i+1]-x[i-1]);
		
	}
	sort(tp.begin(),tp.end());
	ll ans=0;
	f(i,0,n){
		ans+=tp[i]*h[i];
	}
	cout<<ans<<endl;
	
	
	/*test case
1
7
1 2
3 6
6 2
7 5
10 6
12 3
13 1

	*/
	
}
int main(){
	whilet(){
		solve();		
	}
}
