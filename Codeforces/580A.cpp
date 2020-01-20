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
	ll ans=0,temp=0;
	ll p,q;
	f(i,0,n){
		if(i==0){
			temp=1;
			cin >> p;
			q=p;
			continue;
		}
		p=q;
		cin  >> q;
		if(q<p){
			ans=max(ans,temp);
			temp=1;
			p=q;			
		}else
			temp++;
	}
	ans=max(ans,temp);
	cout<<ans<<endl;
	
}
int main(){	
	solve();		
	
}
