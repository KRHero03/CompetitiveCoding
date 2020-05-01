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
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	ll x,y,x1,y1,x2,y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	x = x - a + b;
	y = y - c + d;
	if(x>=x1 && x<=x2 && y>=y1 && y<=y2){
		if((abs(x1-x2)==0 && (a!=0 || b!=0)) || (abs(y1-y2)==0 && (c!=0 || d!=0))){
			cout<<"No"<<endl;
			return;
		}
		cout<<"Yes"<<endl;
		return;
	}
	cout<<"No"<<endl;
	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


