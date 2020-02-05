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
	ll n,q;
	cin >> n >> q;
	ll t,l,r,x;
	vector <ll> arr(n,0);
	vector <ll> XOR(n,0);
	vector <ll> sum(n,0);
	while(q--){
		cin >> t;
		if(t==1){
			cin >> l >> r >> x;
			l--;
			r--;
			fe(i,l,r){
				arr[i]|=x;
			}
		}else if(t==2){			
			cin >> l >> r >> x;
			l--;
			r--;
			fe(i,l,r){
				arr[i]&=x;
			}
		}else if(t==3){			
			cin >> l >> r >> x;
			l--;
			r--;
			fe(i,l,r){
				arr[i]^=x;
			}
		}else if(t==4){		
			cin >> l >> r;
			l--;
			r--;
			ll sumA=0;
			f(i,0,r){
				sumA+=arr[i];
			}
			cout<<sumA<<endl;
		}else{			
			cin >> l >> r;
			l--;
			r--;
			ll sumA=0;
			f(i,0,r){
				sumA^=arr[i];
			}
			cout<<sumA<<endl;
		}
	}
	
	
	
}
int main(){
		solve();		
	
}
