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
	ll n,m,ans=0;
	cin >> n >> m;
	string p;
	cin >> p;
	f(i,0,(m+1)/2){
		unordered_map<char,ll> umap;
		ll c = 0;
		string s = p;
		for(ll j=i;j<n;j+=m){
			if(s[j]!='#'){
				umap[s[j]]++;
				s[j]='#';
				c++;
			}				
		}
		for(ll l=n-1-i;l>0;l-=m){
			if(s[l]!='#'){
				umap[s[l]]++;
				s[l]='#';
				c++;
			}
		}
		ll p = 0;
		char temp = 'a';
		for(auto i: umap){
			if(p<i.S){
				p = i.S;
				temp = i.F;
			} 
		}
		//debug(i);
		//debug(temp);
		//debug(c);
		//debug(p);
		ans+=c-p;
	}

	cout<<ans<<endl;
	return;	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


