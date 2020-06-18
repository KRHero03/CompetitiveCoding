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
	ll u;
	cin >> u;
	ll q = 10000;
	vector<vector<ll>> arr(26,vector<ll>(10,0));
	while(q--){
		ll m;
		string s;
		cin >> m >> s;
		ll temp = m;
		ll dCount = 0;
		while(temp>0){
			dCount++;
			temp/=10;
		}
		
		ll n = s.size();
		if(dCount>n || m==-1){
			ll p = 1;
			for(int i = n-1;i>=0;i--){
				if(i==0){
					f(j,1,10) arr[s[i]-'A'][j]+=p;
				}else{
					f(j,0,10) arr[s[i]-'A'][j]+=p;
				}
				p*=10;
			}
		}else{
			ll p = pow(10,n-1);
			for(int i = 0;i<n;i++){
				ll temp =  ceil((double)m/(double)p);
				f(j,1,temp){
					arr[s[i]-'A'][j]+=p;
				}
				arr[s[i]-'A'][temp]+=m%p;
				p/=10;
				
			}
		}
		if(s.size()==1){
			ll t= min(m,9LL);
			fe(i,0,t){
				arr[s[0]-'A'][i]++;
			}
		}else{
			fe(i,10,m){
				ll temp = i;
				arr[s[1]-'A'][temp%10]++;
				temp/=10;
				arr[s[0]-'A'][temp]++;
			}
		}
	}
	/*ll t = 0;
	for(auto i: arr){
		cout<<(char)(t+65)<<" ";
		for(auto j: i) cout<<j<<" ";
		cout<<endl;
		t++;
	}*/
	vector<pair<ll,pair<ll,ll>>> c;
	f(i,0,26){
		f(j,0,10){
			if(arr[i][j]!=0){
				c.pb({arr[i][j],{j,(char)i+'A'}});
			}
		}
	}
	sort(c.rbegin(),c.rend());
	vector<ll> flag(10,0);
	vector<ll> flagC(26,0);
	string ans="AAAAAAAAAA";
	for(auto i: c){
		if(flag[i.S.F]==0 && flagC[i.S.S-65]==0){
			ans[i.S.F]=i.S.S;
			flag[i.S.F]=1;
			flagC[i.S.S-65]=1;
		}
	}
	
	cout<<ans<<endl;
	return;
}
int main(){
	//freopen("input.txt","r",stdin);
	ll t;
	cin >> t;
	ll q= 1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();			
		q++;
	}	
	
}


