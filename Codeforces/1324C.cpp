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
	string s;
	cin >> s;
	ll n = s.size();
	vector <ll> arr;
	f(i,0,n){
		if(s[i]=='R'){
			arr.pb(i);
		}
	}
	if(arr.size()==0){
		cout<<n+1<<endl;
		return;
	}
	
	/*if(arr.size()==1){
		ll left = arr[0]+1;
		ll right = n - arr[0];
		cout<<max(left,right)<<endl;
		return;
	}*/
	arr.pb(n);
	ll ans = arr[0] + 1;
	ll size = arr.size();
	f(i,1,size){
		ans = max(ans,arr[i] - arr[i-1]);
	}
	cout<<ans<<endl;
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


