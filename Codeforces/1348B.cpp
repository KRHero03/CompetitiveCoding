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
	ll n,k;
	cin >> n >> k;
	vector<ll> arr(n,0);
	for(ll& x: arr) cin >> x;
	vector<ll> ans;
	ll m = 0;
	
	vector<ll> flag(n+1,0);
	f(i,0,n){
		flag[arr[i]]=1;
	}
	ll count = 0;
	vector<ll> printer;
	fe(i,1,n){
		if(flag[i]!=0){
			printer.pb(i);
			count+=1;
		}
	}
	// for(auto i: printer) debug(i);
	if(count>k){
		cout<<-1<<endl;
		return;
	}
	ll i = 1;
	while(printer.size()<k){
		while(flag[i]!=0) i++;
		printer.pb(i);
	}
	f(i,0,n){
		for(auto j: printer) ans.pb(j);
	}
	m = ans.size();
	cout<<m<<endl;
	for(auto i: ans) cout<<i<<" ";
	cout<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


