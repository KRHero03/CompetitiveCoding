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
	string s;
	cin >> s;
	stack<ll> ones,zeros;
	vector<ll> ans(n,0);
	ll pass = 0;
	f(i,0,n){
		if(s[i]=='0'){
			if(ones.empty()){
				pass++;
				zeros.push(pass);
				ans[i] = pass;
			}else{
				ans[i] = ones.top();
				ll num = ones.top();
				zeros.push(num);
				ones.pop();
			}
		}else{
			if(zeros.empty()){
				pass++;
				ones.push(pass);
				ans[i] = pass;
			}else{
				ans[i] = zeros.top();
				ll num = zeros.top();
				ones.push(num);
				zeros.pop();
			}
		}
	}
	cout<<pass<<endl;
	for(auto i : ans) cout<<i<<" ";
	cout<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


