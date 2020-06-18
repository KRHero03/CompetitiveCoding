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
	vector<vector<char>> arr(9);
	char temp;
	f(i,0,9){
		f(j,0,9){
			cin >> temp;
			arr[i].pb(temp);
		}
	}
	vector<pair<ll,ll>> ones;
	f(i,0,9){
		f(j,0,9){
			if(arr[i][j]=='1'){
				ones.pb(mp(i,j));
			}
		}
	}
	ll k =2;
	for(auto i: ones){
		if(k==10){
			arr[i.F][i.S]=(char)(2+48);
			break;
		}
		arr[i.F][i.S]=(char)k+48;
		k++;
	}
	f(i,0,9){
		f(j,0,9){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


