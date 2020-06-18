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
	ll pass=1;
	f(i,0,x.size()){
		if(x[i]!='4' && x[i]!='7'){
			pass=0;
		}
	}
	if(pass==1){
		cout<<"YES"<<endl;
		return;		
	}
	ll num=stoi(x);
	if(num%4==0 || num%7==0 || num%44==0 || num%47==0 || num%74==0 || num%77==0 || num%444==0 || num%447==0 || num%474==0 || num%477==0){
		cout<<"YES"<<endl;
		return;
	}
	cout<<"NO"<<endl;
	
	
	
}
int main(){
	solve();
}
