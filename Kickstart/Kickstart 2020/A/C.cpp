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
	ll n,k,temp;
	cin >> n >> k;
	vector<ll> arr;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
	}
	
	multiset<ll,greater<ll>> diff;
	f(i,1,n){
		diff.insert(arr[i]-arr[i-1]);
	}
	
	f(j,0,k){
		auto iterator = diff.begin();
		ll val = *iterator;
		if(val==1) break;
		diff.insert((ll)ceil((double)val/2.0));
		diff.insert((ll)floor((double)val/2.0));
		diff.erase(diff.find(val));
		cout<<val<<endl;
	}
	auto iterator = diff.begin();
	ll val = *iterator;
	cout<<val;
	
	cout<<endl;
	
}
int main(){
	//freopen("input.txt","r",stdin);
	int t;
	cin >> t;
	int q=1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();
		q++;
	}		
	
	
}


