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
	string x;
	cin >> x;
	ll size=x.size();
	
	f(i,0,size){
			if(x.substr(i,3)=="WUB"){	
				x[i]='1';
				x[i+1]='1';
				if(i+5<size-5){
					if(x.substr(i+3,3)=="WUB"){
						x[i+2]='1';
					}else{
						x[i+2]=' ';
					}
				}else{
					x[i+2]=' ';
				}		
				i+=2;
			}		
	}
	ll pass=0;
	f(i,0,size){
		if(x[i]=='1'){
			
		}else{
			if(pass==0 && x[i]==' '){
				
			}
			else{
				cout<<x[i];
				pass=1;
				
			}
		}
	}
	cout<<endl;
	return;
	
	
	
}
int main(){
	solve();		
	
}
