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

using namespace std;
void solve(){
	int n,m,q;
	cin >> n >> m;
	char a[n][m],b[n][m];
	f(i,0,n){
		f(j,0,m){
			cin >> a[i][j];			
		}
	}
	f(i,0,n){
		f(j,0,m){
			cin >> b[i][j];			
		}
	}
	ll ans=INT_MAX;
	fe(i,-m,m){		
		f(j,-n,n){
			ll temp=0;
			f(k,0,n){
				f(l,0,m){
					if((l+i)>=m || (l+i)<0 || (k+j)>=n || (k+j)<0){
						if(a[k][l]!='0'){
							temp++;
						}
						continue;
					}
					if(a[k][l]!=b[k+j][l+i])
						temp++;
				}
			}
			ans=min(ans,temp);
		}
	}
	cout<<ans<<endl;
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
