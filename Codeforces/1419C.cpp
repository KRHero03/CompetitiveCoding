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
	ll n,x;
	cin >> n >> x;
	vector<ll> arr(n);
	for(auto & i: arr) cin >> i;
	ll sum = 0,pass = 1,pass1=0;
	f(i,0,n){
		if(arr[i]!=x) pass = 0;
		if(arr[i]==x) pass1 = 1;
		sum += (arr[i]-x);
	}
	if(pass){
		cout<<0<<endl;
		return;
	}
	if(sum == 0 || pass1 == 1){
		cout<<1<<endl;
		return;
	}
	cout<<2<<endl;
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


