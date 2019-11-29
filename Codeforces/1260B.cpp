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
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define mid(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;
void solve(){
	ll a,b;
	cin >> a >> b;
	ll x = abs(b-a);
	if(a>2*b || b>2*a){
		cout<<"NO"<<endl;
		return;
	}
	if(a==0){
		if(b==0){
			cout<<"YES"<<endl;
			return;
		}else{
			cout<<"NO"<<endl;
			return;
		}
	}
	if(b==0){
		if(a==0){
			cout<<"YES"<<endl;
			return;
		}else{
			cout<<"NO"<<endl;
			return;
		}
	}
	if(a>b){
		a-=2*x;
		b-=x;
	}else{		
		b-=2*x;
		a-=x;
	}
	if(a%3==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	/*if(a==0 && b==0){
		cout<<"YES"<<endl;
	}
	while(a>0 && b > 0){
		if(a==2*b || b==2*a){
			cout<<"YES"<<endl;
			return;
		}
		if(a>2*b || b > 2*a){
			cout<<"NO"<<endl;
			return;
		}
		if(a>b){
			ll temp=b/2;
			a-=temp*2;
			b-=temp/2;
		}else if(b>a){
			ll temp=a/2;
			a-=temp;
			b-=temp*2;
		}else{
			if(a%2==0 || a==1){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
			return;
		}
		debug(a);
		debug(b);
		
	}*/
	return;
}
int main(){
	whilet(){
		solve();		
	}
}
