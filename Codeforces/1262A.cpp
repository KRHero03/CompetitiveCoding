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
	ll n;
	cin >> n;
	vector <pair<ll,ll>> v;
	ll x,y;
	ll maxF=0;
	ll minS=1e9;
	
	f(i,0,n){
		cin >> x >> y;
		//cout<<x<<" "<<y<<endl;
		//cout<<"max"<<maxF<<" "<<minS<<endl;
		if(maxF<x)
			maxF=x;
		if(minS>y)
			minS=y;
	}
	//debug(maxF);
	//debug(minS);
	/*sort(v.begin(),v.end());
	ll begin=v[0].S;
	ll end=v[v.size()-1].F;
	f(i,0,n){
		if(v[i].S<=v[0].S){
			begin=v[i].S;			
		}
	}
	//debug(end);
	//debug(begin);*/
	ll ans;
	if(minS>maxF)
		ans=0;
	else
		ans=max(0,maxF-minS);
	cout<<ans<<endl;
	return;
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
