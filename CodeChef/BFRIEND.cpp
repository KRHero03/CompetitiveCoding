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
	ll n,a,b,c,temp;
	vector<int> f;
	cin >> n >> a >> b >> c;
	ll ans = INT_MAX;
	f(i,0,n){
		ll ansT=b>a?b-a:a-b;
		cin >> temp;
	
		if(a>b){
			if(temp<b){
				ansT += 2*(b-temp);
			}
			if(temp>a){
				ansT += 2*(temp-a);
			}
		}else{
			if(temp>b){
				ansT += 2*(temp-b);
			}
			if(temp<a){
				ansT += 2*(a-temp);
			}
		}
		ans = min(ans,ansT);
	}
	ans +=c;
	cout<<ans<<endl;
	
}
int main(){
	whilet(){
		solve();		
	}
}
