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
#define scanf "%s quiz"
using namespace std;
void solve(){
	ll n,temp;
	vector<ll> arr;
	cin >> n;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
	}
	vector<ll>tp;
	f(i,0,n){
		if(arr[i]%2==0){
			cout<<1<<endl<<i+1<<endl;
			return;
		}
		tp.pb(i+1);
		if(tp.size()==2){
			cout<<2<<endl;
			for(auto t:tp){
				cout<<t<<" ";
			}
			cout<<endl;
			return;
		}
	}
	cout<<-1<<endl;
	return;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
		
}


