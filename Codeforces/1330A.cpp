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
	ll n,m,temp;
	cin >> n >> m;
	unordered_map<ll,ll> umap;
	f(i,0,n){
		cin >> temp;
		umap[temp] = 1;
	}
	temp = 1;
	while(m>0){
		if(umap.find(temp)==umap.end()){
			umap[temp] = 1;
			m--;
		}
		temp++;
	}
	ll i =1;
	while(true){
		if(umap[i]!=1){
			cout<<i-1<<endl;
			return;
		}
		i++;
	}
	cout<<100<<endl;
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


