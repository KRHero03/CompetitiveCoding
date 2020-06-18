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
	ll n,temp;
	cin >> n;
	vector <ll> arr;
	ll upper=-INT_MAX;
	ll lower = INT_MAX;
	f(i,0,n){
		cin >> temp;		
		arr.pb(temp);
		
	}
	f(i,0,n){
		if(arr[i]==-1){
			if(i>0 && arr[i-1]!=-1){
				upper = max(upper,arr[i-1]);
				lower = min(lower,arr[i-1]);
			}
			if(i<n-1 && arr[i+1]!=-1){
				upper = max(upper,arr[i+1]);
				lower = min(lower,arr[i+1]);
			}
		}
	}
	ll ans = (double)(upper+lower)/2.0;
	if(upper==-INT_MAX){
		cout<<"0 0"<<endl;
		return;
	}
	ll m = -INT_MAX;	
	f(i,1,n){
		
		if(arr[i]!=-1){
			if(arr[i-1]==-1){
				m = max(m,abs(arr[i]-ans));
			}else{
				m = max(m,abs(arr[i]-arr[i-1]));
			}
		}else{
			if(arr[i-1]!=-1){				
				m = max(m,abs(ans-arr[i-1]));
			}
		}
			
	}
	cout<<m<<" "<<ans<<endl;
	
	return;
	
}
int main(){
	whilet(){
		solve();			
	}	
	
}


