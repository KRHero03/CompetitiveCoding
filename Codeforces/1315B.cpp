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
	ll a,b,p;
	cin >> a >> b >> p;
	string s;
	cin >> s;
	ll n = s.size();
	ll ans = 1;
	for(int i=n-2;i>=0;i--){
		if(s[i]=='A'){
			if(p-a>=0){
				while(s[i]=='A') i--;
				p-=a;
				i+=1;
				continue;
			}
			
			i+=1;
			ans = i+1;
			break;
		}else{
			if(p-b>=0){
				while(s[i]=='B') i--;
				p-=b;
				i+=1;
				continue;
			}
			i+=1;
			ans = i+1;
			break;
		}
	}
	cout<<ans<<endl;
	return;
}
int main(){
	whilet(){
		solve();			
	}	
	
}


