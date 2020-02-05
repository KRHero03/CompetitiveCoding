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
#define INF 10e10
#define PI 3.1415926535897932384626433832

using namespace std;
void solve(){
	string x,y;
	cin >> x >> y;
	ll arr[x.size()+2][26];
	f(i,0,x.size()+2){
		f(j,0,26){
			arr[i][j]=INF;
		}
	}
	fde(i,0,x.size()-1){
		f(j,0,26){
			arr[i][j] = arr[i+1][j];
		}
		arr[i][x[i]-'a'] = i;
	}
	ll pos=0,res=1;
	f(i,0,y.size()){
		if(pos==x.size()){
			pos = 0;
			res++;
		}
		if(arr[pos][y[i]-'a'] == INF){
			pos = 0;
			res++;
		}
		if(arr[pos][y[i]-'a'] == INF && pos == 0){
			res = -1;
			break;
		}
		pos = arr[pos][y[i]-'a'] + 1;			
	}
	cout<<res<<endl;
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
