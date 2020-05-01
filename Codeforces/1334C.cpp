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
	ll n,temp,temp1;
	cin >> n;
	ll a[n],b[n];
	f(i,0,n){
		cin >> a[i] >> b[i];
	}
	ll sum=0;
	
	f(i,0,n){
        sum += max(0ll, a[(i + 1) % n] - b[i]);
	}
	ll res = -1;
	f(i,0,n){
        ll i1 = i == 0 ? n - 1 : i - 1;
        ll t = sum - max(0ll, a[i] - b[i1]);
        t += a[i];
        if (res == -1) {
        	res = t;
        } else {
        	res = min(res, t);
        }
    }
	cout<<res<<endl;
	return;
}
int main(){
	
	fastio;
	ll t;
	cin >> t;
	while(t--){
	
		solve();			
	}	
	
}


