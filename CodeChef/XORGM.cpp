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
	ll m,n,temp;
	cin >> n;
	m = 0;
	unordered_map<ll,ll> umap1;
	vector<ll> arr;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
		m = m^temp;
	}
	f(i,0,n){
		cin >> temp;
		umap1[temp]++; 
		m = m^temp;
	}
	vector<ll> ans;
	for(auto i:arr){
		ll val = i^m;
		if(umap1[val]<1){
			cout<<-1<<endl;
			return;
		}else{
			ans.pb(val);
			umap1[val]--;
		}
	}
	for(auto i: ans)cout<<i<<" ";
	cout<<endl;
	return;
}
int main(){
	whilet(){
		solve();			
	}	
	
}


