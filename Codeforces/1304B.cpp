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
	ll n,m;
	cin >> n >> m;
	vector<string> x;
	string temp;
	f(i,0,n){
		cin >> temp;
		x.pb(temp);
	}
	vector<string>ans;
	int flag[n];
	f(i,0,n) flag[i]=0;
	
	f(i,0,n){
		f(j,i+1,n){
			if(flag[i]==0 && flag[j]==0){
				string p = x[j];
				reverse(p.begin(),p.end());
				ll pass=1;
				f(l,0,m){
					if(x[i][l]!=p[l]){
						pass=0;
						break;
					}
				}
				if(pass==1){
					flag[i]=-1;
					flag[j]=-1;
					ans.pb(x[i]);
				}
			}
			
		}
	}
	string s;
	f(i,0,n){
		ll j=0;
		ll pass=1;
		if(flag[i]==-1) continue;
		while(j<m-j-1){
			if(x[i][j]!=x[i][m-j-1]){
				pass=0;
				break;
			}
			j++;
		}
		if(pass==1){
			if(x[i].size()>s.size()){
				s = x[i];
			}
		}
	}
	if(s.size()!=0) ans.pb(s);
	if(ans.size()==0){
		cout<<0<<endl;
		return;
	}
	ll a=0;
	a+=s.size();
	f(i,0,ans.size()){
		if(i==ans.size()-1 && s.size()!=0) continue;
		a+=2*ans[i].size();
	}
	cout<<a<<endl;
	for(auto i:ans) {
		cout<<i;
	}
	
	reverse(ans.begin(),ans.end());
	f(i,0,ans.size()){
		if(s.size()!=0 && i==0) continue;
		 reverse(ans[i].begin(),ans[i].end());
		cout<<ans[i];
	}
	
	return;
	
	
	
}
int main(){

	solve();			
	
	
}


