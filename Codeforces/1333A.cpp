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
	ll n,m;
	cin >> n >> m;
	ll temp = 1;
	if(n%2!=0 && m%2!=0){
		f(i,0,n){
			f(j,0,m){
				if(temp==1){
					cout<<"B";
					temp = 0;
				}else{
					cout<<"W";
					temp=1;
				}
			}
			cout<<endl;
		}
	}else if(n%2!=0 && m%2==0){
		f(i,0,n-1){
			f(j,0,m){
				if(temp==1){
					cout<<"B";
					temp = 0;
				}else{
					cout<<"W";
					temp = 1;
				}
			}
			if(i%2!=0) temp=1;
			else temp = 0;
			cout<<endl;
		}
		f(j,0,m-1){
			if(temp==1){
				cout<<"B";
				temp = 0;
			}else{
				cout<<"W";
				temp = 1;
			}
			
		}
		cout<<"B"<<endl;
	}else if(n%2==0 && m%2!=0){
		f(i,0,n){
			f(j,0,m){
				if(j==m-1 && i==n-1) break;
				if(temp==1){
					cout<<"B";
					temp=0;
				}else{
					cout<<"W";
					temp=1;
				}
			}
			if(i==n-1) break;
			cout<<endl;
		}
		cout<<"B"<<endl;
	}else{
		f(i,0,n){
			f(j,0,m){
				if(j==1&&i==0){
					cout<<"B";
					continue;
				}
				if(j%2==0){
					cout<<"B";
				}else{
					cout<<"W";
				}
			}
			cout<<endl;
		}
	}
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


