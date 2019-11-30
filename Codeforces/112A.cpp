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
	string x,y;
	cin >> x >> y;
	ll size=x.size();
	ll size1=y.size();
	f(i,0,size){
		if(x[i]>=65 && x[i]<=90)
			x[i]+=32;
	}
	
	f(i,0,size1){
		if(y[i]>=65 && y[i]<=90)
			y[i]+=32;
	}
	ll min=MIN(size,size1);
	f(i,0,min){
		if(x[i]<y[i]){
			cout<<-1<<endl;
			return;
		}else if(x[i]>y[i]){
			cout<<1<<endl;
			return;
		}
	}
	cout<<0<<endl;
	
	
}
int main(){
	solve();
}
