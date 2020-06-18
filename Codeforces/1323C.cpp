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

int searchForSum(int start, int limit, int objective, string s)
{
	int sum = 0;
	for(int i=start; i<limit; i++)
	{
		if(s[i]=='(') sum++;
		else sum--;
		if(sum == objective) return i;
	}
	return -1;
}

void solve(){
	ll n,total=0;
	cin >> n;
	string s;
	cin >> s;
	f(i,0,n){
		if(s[i]=='(') total++;
		else total--;
	}
	if(total!=0){
		cout<<-1<<endl;
		return;
	}
	ll ans=0,start=0;
	while(start<n){
		ll negPos=-1,posPos=-1;
		total=0;
		f(i,start,n){
			if(s[i]=='(') total++;
			else total--;
			if(total==-1) {
				negPos=i;
				break;
			}
		}
		if(negPos==-1){
			break;
		}
		total=0;
		f(i,negPos+1,n){
			if(s[i]=='(') total++;
			else total--;
			if(total==1) {
				posPos=i;
				break;
			}
		}
		if(posPos==-1){
			break;
		}
		ans+=posPos-negPos+1;
		start= posPos+1;
	}
	cout<<ans<<endl;
	
	
}
int main(){
	solve();			

	
}


