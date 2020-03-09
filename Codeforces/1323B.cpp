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
	ll n,m,k,temp;
	cin >> n >> m >> k;
	vector<ll> arr,arr1;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
	}
	f(i,0,m){
		cin >> temp;
		arr1.pb(temp);
	}
	ll ans = 0;
	for(int fac=1;fac*fac<=k;fac++){
		if(k%fac==0){
			ll fac1= k/fac;
			temp=0;
			ll c1=0,c2=0,c11=0,c12=0;
			f(i,0,n){
				if(arr[i]==1){
					temp++;
					if(temp>=fac){
						c1++;
					}
					if(temp>=fac1){
						c11++;
					}
					continue;
				}
				temp=0;
			}
			temp=0;
			f(j,0,m){				
				if(arr1[j]==1){
					temp++;
					if(temp>=fac1){
						c2++;
					}
					if(temp>=fac){
						c12++;
					}
					continue;
				}
				temp=0;
			}
			if(fac==fac1){
				
				ans+=c1*c2;
				continue;
			}
			ans+=c1*c2;
			ans+=c11*c12;
		}
	}
	cout<<ans<<endl;
	return;
	
}
int main(){
	fastio;
	solve();			
	
	
}


