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
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
	}
	vector <ll> ans(n,0);
	ans[0] = 1;
	ll final = 1;
	ll combo = 0;
	ll id = 0;
	f(i,1,n){
		if(arr[i]==arr[i-1]){
			combo++;
			id = i;
			ans[i] = ans[i-1];
		}
		if(arr[i]!=arr[i-1]){
			ans[i] = 3 - ans[i-1];
			final = 2;
		}
	}
	if(arr[0] !=arr[n-1] && ans[0]==ans[n-1]){
		if(combo==0){
			ans[0]=3;
			final = 3;
		}else{
			f(i,id,n){
				ans[i] = 3 - ans[i];
			}
		}
		
	}
	cout<<final<<endl;
	f(i,0,n) cout<<ans[i]<<" ";
	cout<<endl;
	
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


