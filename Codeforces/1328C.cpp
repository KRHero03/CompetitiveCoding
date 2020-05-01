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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	string ans(n,' '),ans1(n,' ');
	ll done = 0;
	f(i,0,n){
		if(done==0){
			if(s[i]=='2'){
				ans[i]='1';
				ans1[i]='1';
				continue;
			}
			if(s[i]=='0'){
				ans[i]='0';
				ans1[i]='0';
				continue;
			}
			ans[i]='0';
			ans1[i]='1';
			done = 1;
		}else{
			if(s[i]=='2'){
				ans[i]='2';
				ans1[i]='0';
				continue;
			}
			if(s[i]=='0'){
				ans[i]='0';
				ans1[i]='0';
				continue;
			}
			ans[i]='1';
			ans1[i]='0';
		}
		
		
		
	}
	cout<<ans<<endl<<ans1<<endl;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


