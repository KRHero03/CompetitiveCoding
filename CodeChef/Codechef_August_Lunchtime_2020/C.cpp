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
	ll n,m;
	cin >> n >> m;
	vector<ll> arr(n);
	for(auto& i: arr) cin >> i;
	vector<ll> prm(n,0);
	vector<ll> pr = arr;
	vector<vector<ll>> ratings(m,vector<ll>(n,0));
	vector<vector<ll>> ranking(m,vector<ll>(n,0));
	f(i,0,n){
		f(j,0,m){
			ll temp;
			cin >> temp;
			if(j==0){
				ratings[j][i] = arr[i] + temp;		
				pr[i] = ratings[j][i];
				prm[i] = j;
				continue;		
			}
			ratings[j][i] = ratings[j-1][i] + temp;		
			if(pr[i]<ratings[j][i]){
				pr[i] = ratings[j][i];
				prm[i] = j;				
			}
		}
	}
	f(i,0,m){
		vector<pair<ll,ll>> tempArr;
		f(j,0,n){
			tempArr.pb({ratings[i][j],j});
		}
		sort(tempArr.rbegin(),tempArr.rend());
		ll rank = 1;
		f(j,0,n){
			if(j==0){
				ranking[i][tempArr[j].S]=rank;
				rank++;
				continue;
			}
			if(tempArr[j].F==tempArr[j-1].F){
				ranking[i][tempArr[j].S] = ranking[i][tempArr[j-1].S];
			}else{
				ranking[i][tempArr[j].S] = rank;
			}
			rank++;
		}
	}
	vector<ll> prankm(n,0);
	f(i,0,n){
		int month = 0,maxRank = 0;
		f(j,0,m){
			if(j==0){
				maxRank = ranking[j][i];
				month = j;
				continue;
			}
			if(maxRank>ranking[j][i]){
				maxRank = ranking[j][i];
				month = j;
			}
		}
		
		prankm[i] = month;
		
	}
	ll ans = 0;
	f(i,0,n){
		if(prm[i]!=prankm[i]) ans++;
	}
	cout<<ans<<endl;

	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


