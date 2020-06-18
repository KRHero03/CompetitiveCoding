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
ll modularExponentiation(ll x,ll y,ll z){
	ll a=x%z;
	ll res=1;
	while(y>0){
		if(y&1){
			res=((res%z)*(a%z))%z;
		}
		a=((a%z)*(a%z))%z;
		y=y>>1;
	}
	return res;
}
int main(){
	ll x,y,z;
	while(cin>>x>>y>>z){
		//debug(x);
		//debug(y);
		//debug(z);
		cout<<modularExponentiation(x,y,z)<<endl;
	}
}
