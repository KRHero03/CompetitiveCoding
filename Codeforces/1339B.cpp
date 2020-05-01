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
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(ll& i: arr) cin >> i;
	sort(arr.begin(),arr.end());
	ll mid = n/2-1;
	if(n%2!=0) mid++;
	ll flag=0;
	ll printed = 0;
	ll i =0;
	while(flag==0){
		if(mid+i<n){			
			cout<<arr[mid+i]<<" ";
		}else{
			flag=1;
		}
		if(i==0){
			i++;
			continue;
		}
		if(mid-i>=0)
			cout<<arr[mid-i]<<" ";
		else{
			flag=1;
		}
		i++;
	}
	cout<<endl;
	
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


