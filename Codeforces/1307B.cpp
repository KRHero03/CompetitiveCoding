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
void solve1(){
	ll n,x,temp;
	cin >> n >> x;
	vector<ll> arr;
	unordered_map <ll,ll> umap;
	f(i,0,n){
		cin >> temp;
		arr.pb(temp);
		umap[temp]=1;
	}
	sort(arr.begin(),arr.end());
	ll max = arr[n-1];
	ll divisor = 0;
	for(int i = n-1;i>=0;i--){
		if(x%arr[i]==0){
			divisor = arr[i];
			break;
		}
	}
	ll ans;
	if(divisor==0){
		if(2*max>=x){
			cout<<2<<endl;
		}else{
			ans = x/max;
			temp = x%max;
			if(umap[temp]==1){
				cout<<ans+1<<endl;
			}else{
				cout<<ans+2<<endl;
			}
		}		
		return;
	}
	if(2*max>=x){		
		ans = MIN(2,x/divisor);
	}else{
		ans = x/max;
		temp = x%max;
		if(umap[temp]==1){
			ans++;
		}else{
			ans+=2;
		}
		ans = MIN(ans,x/divisor);
	}
	cout<<ans<<endl;
	return;
	
}

void solve(){
	ll n,x,temp;
	cin >> n >> x;
	ll max=-INT_MAX;
	ll ifX = 0;
	f(i,0,n){
		cin >> temp;
		if(temp==x) ifX=1;
		max = MAX(max,temp);
	}
	if(ifX){
		cout<<1<<endl;
		return;
	}
	if(max>=x){
		cout<<2<<endl;
		return;
	}
	ll ans = ceil((double)x/(double)max);
	cout<<ans<<endl;
}
int main(){
	whilet(){
		solve();			
	}	
	
}


