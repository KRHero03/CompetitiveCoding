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
	ll n,x,k;
	cin >> n >> k;
	vector <ll> arr,right,left,leftR;
	left.pb(0);
	leftR.pb(0);
	f(i,0,n){
		cin >> x;
		arr.pb(x);
		left.pb(left[left.size()-1] + x);
		leftR.pb(leftR[leftR.size()-1] + x%k);
	}
	left.pb(left[left.size()-1]);
		leftR.pb(leftR[leftR.size()-1]);
	right.pb(0);
	for(int i = n-1;i>=0;i--){
		right.pb(right[right.size()-1]+(k -arr[i]%k)%k);
	}
	right.pb(right[right.size()-1]);
	sort(right.rbegin(),right.rend());
	ll ans = INT_MAX;
	f(i,0,n+1){
		if(left[i]>=right[i+1]){
			if(leftR[i]>=right[i+1]){
				//debug(i);
				//debug(left[i]);
				//debug(leftR[i]);
				//debug(right[i+1]);
				ans = min(ans,leftR[i]-right[i+1]);
				continue;
			}
			ll diff = right[i+1] - leftR[i];
			ans = min(ans,(k - diff%k)%k);
		}
	}
	cout<<ans<<endl;
	return;
	
}
int main(){
	whilet(){
		solve();
	}
	
	
}


