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
	vector<ll> arr(n);
	for(ll& x: arr) cin >> x;
	vector<ll> peak(n,0);
	f(i,1,n-1){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			peak[i]=1;
		}
	}
	ll l = 0,p=0,ans=0;
	f(i,1,k-1){
		if(peak[i]){
			p++;
		}
	}
	ans = max(ans,p);
	f(i,1,n-k+1){
		//cout<<i<<" "<<peak[i]<<" "<<i+k-1<<" " <<peak[i+k-1]<<endl;
		if(peak[i]==1) p--;
		if(peak[i+k-2]==1) p++;
		if(ans<p){
			ans = p;
			l = i;
		}
	}
	cout<<ans+1<<" "<<l+1<<endl;
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


