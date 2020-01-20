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
	ll n;
	cin >> n;
	if(n==1){
		cout<<"Hooray\n1"<<endl;
		return;
	}
	if(n%2!=0){
		cout<<"Boo"<<endl;
		return;
	}
	int ans[n][n];
	ans[0][0]=1;
	int i=1;
	while(i<n){
		f(j,0,i){
			f(k,0,i){				
				ans[j+i][k+i] = ans[j][k];
				if(j==k){
					ans[j+i][j] = 2*i;
				}else{					
					ans[j+i][k] = ans[j][k]+2*i;
				}				
				ans[j][k+i] = ans[j][k]+2*i;
			}			
		}
		i*=2;
	}
	cout<<"Hooray"<<endl;
	f(i,0,n){
		f(j,0,n){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
	
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
