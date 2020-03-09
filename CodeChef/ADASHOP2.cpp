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
	ll r,c;
	cin >> r >> c;
	vector<pair<ll,ll>> ans;		
	if(r==8 && c==8){
	
	}else{
		if(r!=c){
			ll num=(r+c)/2;
			ans.pb({num,num});
		}		
		ans.pb({8,8});
	}
	ans.pb({7,7});ans.pb({8,6});ans.pb({6,8});ans.pb({7,7});
	ans.pb({6,6});ans.pb({8,4});ans.pb({4,8});ans.pb({6,6});
	ans.pb({5,5});ans.pb({8,2});ans.pb({2,8});ans.pb({5,5});
	ans.pb({4,4});ans.pb({7,1});ans.pb({1,7});ans.pb({4,4});
	ans.pb({3,3});ans.pb({5,1});ans.pb({1,5});ans.pb({3,3});
	ans.pb({2,2});ans.pb({3,1});ans.pb({1,3});ans.pb({2,2});
	ans.pb({1,1});
	cout<<ans.size()<<endl;
	for(auto i:ans){
		cout<<i.F<<" "<<i.S<<endl;
	}
}
int main(){
	whilet(){
		solve();			
	}	
	
}


