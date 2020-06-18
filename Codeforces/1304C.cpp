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
	ll n,m;
	cin >> n >> m;
	vector<pair<ll,pair<ll,ll>>> arr;
	ll temp,temp1,temp2;
	arr.pb(mp(0,mp(m,m)));
	f(i,0,n){
		cin >> temp >> temp1 >> temp2;
		arr.pb(mp(temp,mp(temp1,temp2)));
	}
	temp = m;
	temp1 = m;
	f(i,0,n){
		ll diff = arr[i+1].F - arr[i].F;
		if(temp - diff >arr[i+1].S.S || temp1+diff<arr[i+1].S.F){
			cout<<"NO"<<endl;
			return;
		}
		temp = max(temp-diff,arr[i+1].S.F);
		temp1 = min(temp1+diff,arr[i+1].S.S);
	}
	cout<<"YES"<<endl;
	return;
}
int main(){
	whilet(){
		solve();			
	}	
	
}


