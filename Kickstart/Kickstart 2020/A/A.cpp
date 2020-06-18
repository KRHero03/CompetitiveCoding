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

void solve(ll t){
	ll n,b,temp;
	cin >> n >> b;
	vector <ll> arr;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
	}
	sort(arr.begin(),arr.end());
	f(i,1,n){
		arr[i]+=arr[i-1];
	}
	ll ans = lower_bound(arr.begin(),arr.end(),b+1)-arr.begin();
	cout<<"Case #"<<t<<": "<<ans<<endl;
	
}
int main(){
	int t;
	cin >> t;
	ll q=1;
	while(q<=t){
		solve(q);
		q++;			
	}	
	
}


