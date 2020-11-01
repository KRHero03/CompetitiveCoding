/*
	author: KRHero
	IDE: VSCode	
*/

#include <bits/stdc++.h>

#define ll unsigned long long int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=b;i>a;i--)
#define fde(i,a,b) for(int i=b;i>=a;i--)
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; cin >> t;while(t--)
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
	string s;
	cin >> s;
	ll oo=0,oe=0,eo=0,ee=0;
	f(i,0,n){
		if(i%2==0){
			if((s[i]-'0')%2==0){
				oe++;
			}else{
				oo++;
			}
		}else{
			if((s[i]-'0')%2==0){
				ee++;
			}else{
				eo++;
			}
		}
	}
	if(n%2==1){
		if(oo>=1){
			cout<<1<<endl;
			return;
		}
		cout<<2<<endl;
		return;
	}
	if(ee>=1){
		cout<<2<<endl;
		return;
	}
	cout<<1<<endl;
	return;
}
int main(){
    whilet()
	    solve();
	
}


