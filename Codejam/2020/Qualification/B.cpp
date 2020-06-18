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
	string s;
	cin >> s;
	ll size = s.size();
	vector<string> p(size+1);
	f(i,0,size+1) p[i]="#";
	ll diff=0;
	s.pb('0');
	f(i,0,size+1){
		if(i==0)
			diff = s[i]-'0';
		else
			diff = (s[i] - '0') - (s[i-1]-'0');
		if(diff>0){
			p[i][0]='(';
			f(j,1,diff){
				p[i].pb('(');
			}		
		}
		if(diff<0){
			ll temp = abs(diff);
			p[i][0]=')';
			f(j,1,temp){
				p[i].pb(')');
			}
		}
	}
	f(i,0,size){
		if(p[i]!="#") cout<<p[i];
		cout<<s[i];
	}
	if(p[size]!="#") cout<<p[size];
	
	cout<<endl;
	
}
int main(){
	
	freopen("input.txt","r",stdin);
	ll t;
	cin >> t;
	ll q = 1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();	
		q++;		
	}	
	
}


