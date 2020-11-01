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
	ll n,temp;
	cin >> n;
	vector<ll> arr(n+1,0);
	ll ans = 0;
	f(i,0,n){
		cin >> temp;
		arr[temp]++;
	}
	fe(j,2,2*n){
		ll temp = 0;
		vector<ll> used(n+1,0);

		fe(i,1,n){
			if(j>i && j-i>0 && j-i<=n && used[i]==0 && used[j-i]==0){
				used[i] = 1;
				used[j-i] = 1;
				if(i==j-i)
					temp+= arr[i]/2;
				else
					temp += min(arr[i],arr[j-i]);
			}
		}
		ans = max(ans,temp);

	}
	cout<<ans<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


