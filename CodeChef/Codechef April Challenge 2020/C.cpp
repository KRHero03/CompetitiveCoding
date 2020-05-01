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
	ll k,n;
	cin >> n>> k;
	ll num = 0;
	if(n==1 && k==1){
		cout<<1<<endl;
		return;
	}
	for(int i =2;i*i<=n;i++){
		while(n%i==0){
			num++;
			n/=i;
		}
	}
	if(n>1) num++;
	if(num<k){
		cout<<0<<endl;
		return;
	}
	cout<<1<<endl;
	
	return;
	
}
int main(){	
	whilet(){
		solve();			
	}	
	
}


