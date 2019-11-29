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
	ll n;
	cin >> n;
	vector<ll> v;
	vector <ll> temp1;
	ll x;	
	vector <ll> ans;
	ll p,pass=1;
	f(i,0,n){
		cin >> x;
		v.pb(x);
	}
	ll j=0;
	f(i,0,n){
		if(i==0){
			ans.pb(v[0]);
			f(l,1,v[0]){
				temp1.pb(l);
			}
			continue;
		}
		if(v[i]==v[i-1]){
			if(j==temp1.size()){
				pass=0;
				break;
			}		
			ans.pb(temp1[j]);
			j++;
		}else{
			ans.pb(v[i]);
			f(l,v[i-1]+1,v[i]){
				temp1.pb(l);
			}
		}
	}
	if(pass==1)
		for(auto i: ans) cout<<i<<" ";
	else
		cout<<-1;
	cout<<endl;
	return;
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
