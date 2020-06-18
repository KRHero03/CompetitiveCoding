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
ll ans = 0;
void solve(){
	ll n,y;
	cin >> n;
	ll val[4][4];
	char x;
	f(i,0,4){
		f(j,0,4) {			
			val[i][j] = 0;
		}
	}
		
	f(i,0,n){
		cin >> x >> y;
		val[x-65][(y%12)/3]++;
	}
	ll temp = -INT_MAX;
	ll count = -INT_MAX;
	vector<ll> tp;
	f(i,0,4){
		f(j,0,4){
			f(k,0,4){
				f(l,0,4){
					if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
						count = 0;
						if(val[i][0]==0) count-=100;
						if(val[j][1]==0) count-=100;
						if(val[k][2]==0) count-=100;
						if(val[l][3]==0) count-=100;
						tp.pb(val[i][0]);
						tp.pb(val[j][1]);
						tp.pb(val[k][2]);
						tp.pb(val[l][3]);
						sort(tp.begin(),tp.end());
						count += tp[0]*25 + tp[1]*50 + tp[2]*75 + tp[3]*100;
					}
				}
				tp.clear();
				temp = max(count,temp);
			}
		}
	}
	cout<<temp<<endl;
	ans+=temp;
	return;
}
int main(){
	whilet(){		
		solve();
	}
	cout<<ans<<endl;
	return 0;
	
}


