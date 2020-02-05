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
	string x;
	cin >> x;
	ll ansR = INT_MAX,ansL = -1;
	map<pair<ll,ll>, ll> map;
	ll p =0,q=0;
	map[mp(0,0)] = 0;
	f(i,0,x.size()){
		if(x[i]=='L') p--;
		else if(x[i]=='R') p++;
		else if(x[i]=='D') q--;
		else if(x[i]=='U') q++;
		pair<ll,ll> temp = mp(p,q);
		if(map.find(temp) != map.end()){
			
			ll j = map[temp];
			if(ansR-ansL>i-j){
				ansL = j;
				ansR = i;
			}
		}
		map[temp] = i+1;
	}
	if(ansL!=-1) cout<<ansL+1<<" "<<ansR+1<<endl;
	else cout<<-1<<endl;
	
	
	
}
int main(){
	whilet(){
		solve();		
	}		
	
}


