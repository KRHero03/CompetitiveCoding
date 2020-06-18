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
	ll n,x,temp;
	cin >> n >> x;
	ll sum = 0;
	vector <ll> a;
	f(i,0,n){
		cin >> temp;
		a.pb(temp);
		sum+=temp;
	}
    double dist = 0;
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++) {
		dist = sum / (double)(n-i);
		if(dist >= x) {
			cout << n-i << "\n";
			return;
		}
		sum -= a[i];
	}
	cout <<"0"<<endl;
	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


