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
	ll n;
	cin >> n;
	vector <int> arr;
	ll x;
	f(i,0,n){
		cin >> x;
		arr.pb(x);
	}
	ll pass = arr[0]%2;
	ll odd = 0;
	if(pass==1){
		odd= 1;
	}
	f(i,0,n){
		if(arr[i]%2!=pass){
			cout<<"YES"<<endl;
			return;
		}
	}
	if(odd && n%2!=0){
		cout<<"YES"<<endl;
		return;
	}
	cout<<"NO"<<endl;
	return;
	
	
	
}
int main(){
	whilet(){
		solve();
		
	}		
	
}


