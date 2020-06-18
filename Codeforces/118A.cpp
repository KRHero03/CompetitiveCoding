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
#define PI 3.1415926535897932384626433832

using namespace std;
void solve(){
	string x;
	cin >> x;
	vector <int> pos;
	f(i,0,x.size()){
		if(x[i]=='a' || x[i]=='e' ||x[i]=='y' || x[i]=='Y'|| x[i]=='i' || x[i]=='o' || x[i]=='u'|| x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U'){
			x[i]='1';
		}else{
			if((int)x[i]>=65 && (int)x[i]<=90){
				x[i]=(char)((int)x[i]+32);
			}
			pos.pb(i);
		}
		
	}
	ll j=0;
	f(i,0,x.size()){
		if(j<pos.size()){
			if(pos[j]==i){
				cout<<".";
				i--;
				j++;
				continue;
			}
		}
		
		if(x[i]=='1')
			continue;
		cout<<x[i];
	}
	cout<<endl;
	
	
	
}
int main(){
	solve();		
	
}
