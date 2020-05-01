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
	ll n,m,k,temp;
	cin >> n >> m >> k;
	vector<vector<ll>> arr(n);
	f(i,0,n){
		f(j,0,k){
			cin >> temp;
			arr[i].pb(temp);
		}
	}
	vector <ll> ans,score(k,0),used;
	f(i,0,n){
		used.clear();
		unordered_map<ll,ll> umap;
		ll m = -INT_MAX;
		f(j,0,k){
			if(score[j]>m) m = score[j];
		}
		f(j,0,k){
			if(score[j]==m){
				used.pb(j);
			}
		}
		ll size = used.size();
		f(j,0,size){
			umap[arr[i][used[j]]]++;
		}
		ll t=1,occ=0;
		for(auto i: umap){
			if(i.S>occ){
				t= i.F;
				occ = i.S;
			}
		}
		f(j,0,k){
			if(arr[i][j]==t){
				score[j]++;
			}
		}
		ans.pb(t);
		
	}
	f(i,0,n) cout<<ans[i]<<" ";
	cout<<endl;
	return;
	
}
int main(){	
	whilet(){
		solve();			
	}	
	
}


