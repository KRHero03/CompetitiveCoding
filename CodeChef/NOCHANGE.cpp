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
	ll n,p,x;
	vector <pair<ll,ll>> d;
	cin >> n >> p;
	f(i,0,n){
		cin >> x;		
		d.pb(mp(x,i));
	}
	f(i,0,n){
		if(p%d[i].F!=0){
			cout<<"YES ";
			f(j,0,n){
				if(j==i){
					cout<<p/d[i].F + 1<<" ";
					continue;
				}
				cout<<"0 ";
			}
			cout<<endl;
			return;
		}
	}
	sort(d.rbegin(),d.rend());
	f(i,0,n-1){
		if(d[i].F%d[i+1].F!=0){
			cout<<"YES ";
			f(j,0,n){
				if(j==d[i+1].S){
					cout<<(p-d[i].F)/d[i+1].F + 1 <<" ";
					continue;
				}
				if(j==d[i].S){
					cout<<"1 ";
					continue;
				}
				cout<<"0 ";
				
			}
			cout<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
	return;
	
	
}
int main(){
	whilet(){
		solve();			
	}	
	
}


