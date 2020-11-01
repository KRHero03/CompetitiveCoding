/*
	author: KRHero
	IDE: VSCode	
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
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; cin >> t;while(t--)
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
	vector<ll> arr(n);
	for(auto& i: arr) cin >> i;
	ll cons = 0,temp = 0,conss = 0;
	f(i,0,n){
		if(arr[i]==0){
			temp++;
		}else{
			if(cons<temp){
				conss = cons;
				cons = temp;
			}
			else  if(conss<temp){
				conss = temp;
			}
			temp = 0;
		}
	}
	if(cons<temp){
		conss = cons;
		cons = temp;
	}
	else  if(conss<temp){
		conss = temp;
	}
	if(cons%2==0){
		cout<<"No"<<endl;
		return;
	}
	if(conss>=(ll)ceil((double)cons/2.0)){
		cout<<"No"<<endl;
		return;
	}
	cout<<"Yes"<<endl;
	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


