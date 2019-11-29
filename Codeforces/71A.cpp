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
	string x;
	cin >> x;
	ll s=x.size();
	if(s>10){
		cout<<x[0]<<s-2<<x[s-1]<<endl;
		return;
	}
	cout<<x<<endl;
	return;
	
	
	
	
}
int main(){
	whilet()
		solve();		
	
}
