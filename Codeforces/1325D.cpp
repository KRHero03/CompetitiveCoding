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
ll isSet(ll x,ll y){
	if(x & (1<<y)) return 1;
	return 0;
}
void solve(){
	ll u,v,temp;
	cin >> u >> v;
	ull power[64];
	power[0]=1;
	f(i,1,64){
		power[i] = 2*power[i-1];
	}
	if(u==v && u==0){
		cout<<0<<endl;
		return;
	}
	if(u==v){
		cout<<1<<endl<<u<<endl;
		return;
	}
	if(u>v){
		cout<<-1<<endl;
		return;
	}
	if(abs(u-v)%2!=0){
		cout<<-1<<endl;
		return;
	}
	temp = (ll)(v-u)>>1;
	/*ll req=0;
	
	for(int i=62;i>=0;i--){
		ll isSetd = isSet(u,i);
		
		if(!(isSet(u,i))){
			if((ll)power[i+1]<=temp){
				debug(i);
				req += power[i];
				temp-= power[i+1];
			}
		}
	}*/
	if(temp + (temp^u) == v){
		cout<<2<<endl<<temp<<" "<<(temp^u)<<endl;
		return;
	}
	temp = (v-u)/2;
	cout<<3<<endl<<u<<" "<<temp<<" "<<temp<<endl;
	
	return;
}
int main(){
	solve();			

	
}


