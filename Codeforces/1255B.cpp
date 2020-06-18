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
	ll n,m,x;
	cin >> n >> m;
	vector <pair<ll,ll>> a;
	ll cost=0;
	f(i,0,n){
		cin >> x;
		a.pb(mp(x,i+1));
		cost+=x;
	}
	sort(a.begin(),a.end());
	if(n>m ||n==2){
		cout<<-1<<endl;
		return;
	}
	cost*=2;
	cost+=(a[0].F+a[1].F)*(m-n);
	cout<<cost<<endl;
	f(i,0,n){
		cout<<a[i].S<<" "<<a[(i+1)%n].S<<endl;
	}
	f(i,0,m-n){
		cout<<a[0].S<<" "<<a[1].S<<endl;
	}
	return;
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
