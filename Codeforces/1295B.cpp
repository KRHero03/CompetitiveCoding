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
	int x,n;
	string s;
	cin >> n >> x >> s;
	int tBal = 0;
	f(i,0,s.size()){
		if(s[i]=='0') tBal++;
		else tBal--;
	}
	
	if(tBal==0){
		int bal = 0;
		f(i,0,s.size()){
			if(s[i]=='0') bal++;
			else bal--;
			if(bal==x){
				cout<<-1<<endl;
				return;
			}
		}
		cout<<0<<endl;
		return;
	}
	int bal = 0,res=0;
	f(i,0,s.size()){
		
		if(abs(x-bal)%abs(tBal)==0){
			if((x-bal)/tBal>=0)
				res++;
		}
		if(s[i]=='0') bal++;
		else bal--;
	}
	cout<<res<<endl;
	return;
	
}
int main(){
	whilet(){
		solve();		
	}
}
