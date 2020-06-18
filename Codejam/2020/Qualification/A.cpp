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
	ll n,temp;
	cin >> n;
	ll trace=0,rows=0,cols=0;
	vector<vector<ll>> arr(n);
	unordered_map<ll,ll> row,col;
	f(i,0,n){
		f(j,0,n){
			cin >> temp;
			if(i==j) trace+=temp;
			arr[i].pb(temp);
		}
	}
	f(i,0,n){
		row.clear();
		col.clear();
		f(j,0,n){
			if(row.find(arr[i][j])!=row.end()){
				rows++;
				break;
			}
			row[arr[i][j]]=1;
		}
		f(j,0,n){
			if(col.find(arr[j][i])!=row.end()){
				cols++;
				break;
			}
			col[arr[j][i]]=1;
		}
	}
	cout<<trace<<" "<<rows<<" "<<cols<<endl;
	
}
int main(){
	//freopen("input.txt","r",stdin);
	ll t;
	cin >> t;
	ll q = 1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();	
		q++;		
	}	
	
}


