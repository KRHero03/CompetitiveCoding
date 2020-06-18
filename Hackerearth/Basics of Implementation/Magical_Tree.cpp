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
int getInt(char x){
	if(x=='0') return 0;
	if(x=='1') return 1;
	if(x=='2') return 2;
	if(x=='3') return 3;
	if(x=='4') return 4;
	if(x=='5') return 5;
	if(x=='6') return 6;
	if(x=='7') return 7;
	if(x=='8') return 8;
	if(x=='9') return 9;
}
void solve(){
	ll n;
	cin >> n;
	ll val = -INT_MAX;	
	string temp;
	f(i,0,n){
		cin >> temp;
		ll tempVal=0;
		f(i,0,temp.size()){
			if(temp[i]=='+'){
				tempVal+=getInt(temp[i+1]);
				i++;
				continue;
			}			
			if(temp[i]=='-'){
			    tempVal-=getInt(temp[i+1]);
			    i++;
			    continue;
			}
			tempVal+=getInt(temp[i]);
		}
		val = max(val,tempVal);
	}
	cout<<val<<endl;
	return;
	
	
	
	
}
int main(){
	solve();			

	
}


