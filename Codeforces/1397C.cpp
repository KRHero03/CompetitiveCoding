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
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(auto& i : arr) cin >> i;
	if(n==1){
		cout<<"1 1"<<endl;
		cout<<-arr[0]<<endl;
		cout<<"1 1"<<endl;
		cout<<"0"<<endl;
		cout<<"1 1"<<endl;
		cout<<"0"<<endl;
		return;
	}
	ll temp = -arr[0];
	vector<ll> second;
	f(i,1,n){
		second.pb(arr[i]*(n-1));
	}
	vector<ll> third;
	f(i,0,n){
		if(i==0) third.pb(0);
		else third.pb(-arr[i]*n);
	}
	cout<<"1 1"<<endl;
	cout<<temp<<endl;
	cout<<"2 "<<n<<endl;
	for(auto i: second) cout<<i<<" ";
	cout<<endl;

	cout<<"1 "<<n<<endl;
	for(auto i: third) cout<<i<<" ";
	cout<<endl;
}
int main(){
	
	solve();
}


