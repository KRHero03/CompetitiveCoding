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
	ll n,temp,ans=0;
	cin >> n;
	vector <ll> a,b;
	f(i,0,n){
		cin >> temp;
		a.pb(temp);
	}
	f(i,0,n){
		cin >> temp;
		b.pb(temp);
	}
	vector <ll> diff;
	f(i,0,n){
		diff.pb(a[i]-b[i]);
	}	
	temp = 0;
	sort(diff.begin(),diff.end());
	f(i,0,n){
		ll val = diff[i];
		if(val<0){
			temp = lower_bound(diff.begin(),diff.end(),1-val)-diff.begin();
		}else if(val==0){
			temp = lower_bound(diff.begin(),diff.end(),1)-diff.begin();
		}else{
			temp = i+1;
		}
		ans+= n-temp;
	}
 
	cout<<ans<<endl;
}
int main(){
	solve();
	
}


