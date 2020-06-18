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
	ll n,m,temp,temp1;
	cin >> n;
	vector <vector<pair<ll,ll>>> edge(n);
	ll ans[n-1];
	f(i,0,n-1) ans[i] = -1;
	f(i,0,n-1){
		cin >> temp >> temp1;
		temp--;
		temp1--;
		edge[temp].pb(mp(temp1,i));
		edge[temp1].pb(mp(temp,i));
	}
	ll pass=1,r;
	f(i,0,n){
		if(edge[i].size()>2){
			pass=0;
			r = i;
			break;
		}
	}
	if(pass==1){
		f(i,0,n-1) cout<<i<<endl;
		return;
	}
	ll p = 0;
	for(pair<ll,ll> e:edge[r]){
		ans[e.S] = p;
		p++;
	}
	f(i,0,n-1){
		if(ans[i]==-1){
			ans[i] = p;
			p++;
		}
	}
	f(i,0,n-1) cout<<ans[i]<<endl;
	return;
}
int main(){
	
	solve();			
		
	
}


