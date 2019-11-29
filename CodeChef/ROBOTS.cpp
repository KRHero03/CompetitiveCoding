#include <bits/stdc++.h>

#define ll long long int
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
	ll n,q;
	cin >> n >> q;
	string x;
	cin >> x;
	vector <int> tp;
	f(i,0,n){
		if(x[i]=='0'){
			tp.pb(0);
		}else if(x[i]=='1'){
			tp.pb(1);
		}else if(x[i]=='2'){
			tp.pb(2);
		}else if(x[i]=='3'){
			tp.pb(3);
		}else if(x[i]=='4'){
			tp.pb(4);
		}else if(x[i]=='5'){
			tp.pb(5);
		}
	}
	vector<pair<double,double>> pos;
	pos.pb(mp(0,0));
	double angle=0;
	f(i,1,n+1){
		angle+=tp[i-1];
		pos.pb(mp(pos[i-1].F+(double)cos((double)((double)(angle*60.0*PI)/(double)180)),pos[i-1].S+(double)sin((double)((double)(angle*60.0*PI)/(double)180))));
	}
	while(q--){
		ll x,y;
		cin >> x >> y;
		if(x==y){
			if(x==1){
				cout<<fixed<<setprecision(8)<<pos[y].F<<" "<<pos[y].S<<endl;				
			}else{
				cout<<fixed<<setprecision(8)<<pos[y].F-pos[x-1].F<<" "<<pos[y].S - pos[x-1].S<<endl;				
			}					
		}else{			
			cout<<fixed<<setprecision(8)<<pos[y].F-pos[x].F<<" "<<pos[y].S - pos[x].S<<endl;
		}
	}
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
