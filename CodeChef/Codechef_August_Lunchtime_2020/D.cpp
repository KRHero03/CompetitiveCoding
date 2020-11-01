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
	ll n,d;
	cin >> n >> d;
	vector<ll> c(n);
	for(auto &i: c) cin >> i;
	sort(c.begin(),c.end());
	double ans = 0;
	double eps = 0.00001;
	double low = 0,high = (double)10000000000;
	while(low<high){
		double mid = (low + high)/2;

		double curTime = c[0]+mid;
		ll flag = 1;
		f(i,1,n){
			if(curTime>c[i]+d){
				flag = 0;
				break;
			}
			curTime = max(curTime+mid,c[i]+mid);
		}
		if(flag){
			ans = mid;
			low = mid+eps;
		}else{
			high = mid-eps;
		}
		
	}
	ans = round( ans * 10000000.0 ) / 10000000.0;
	cout<<setprecision(10)<<fixed<<ans<<endl;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


