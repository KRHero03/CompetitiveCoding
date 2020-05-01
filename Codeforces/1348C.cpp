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
	ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	if(k==1){
		cout<<s<<endl;
		return;
	}
	if(k==n){
		cout<<s[n-1]<<endl;
		return;
	}
	
	vector<string> temp(k,"");
	vector<string> temp1(k,"");
	
	f(i,0,k){
		temp[i]+=s[i];
		temp1[i]+=s[i];
	}
	f(i,k,n){
		temp[0]+=s[i];
		temp1[i%k]+=s[i];
	}
	sort(temp.begin(),temp.end());
	sort(temp1.begin(),temp1.end());
	cout<<min(temp[k-1],temp1[k-1])<<endl;
	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


