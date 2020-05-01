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
	ll n;
	cin >> n;
	vector <ll> arr(n);
	for(ll& i: arr) cin >> i;
	//first 11 prime numbers 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31
	vector <ll> ans(n),flag(11);
	f(i,0,n){
		if(arr[i]%2==0){
			ans[i] = 1;
			flag[0] = 1;
		}else if(arr[i]%3==0){
			ans[i]=2;
			flag[1]=1;
		}
		else if(arr[i]%5==0){
			ans[i]=3;
			flag[2]=1;
		}
		else if(arr[i]%7==0){
			ans[i]=4;
			flag[3]=1;
		}
		else if(arr[i]%11==0){
			ans[i]=5;
			flag[4]=1;
		}
		else if(arr[i]%13==0){
			ans[i]=6;
			flag[5]=1;
		}
		else if(arr[i]%17==0){
			ans[i]=7;
			flag[6]=1;
		}
		else if(arr[i]%19==0){
			ans[i]=8;
			flag[7]=1;
		}
		else if(arr[i]%23==0){
			ans[i]=9;
			flag[8]=1;
		}
		else if(arr[i]%29==0){
			ans[i]=10;
			flag[9]=1;
		}
		else if(arr[i]%31==0){
			ans[i]=11;
			flag[10]=1;
		}
	}
	ll m = 0;
	f(i,0,11){
		if(flag[i]!=0)
			m++;
	}
	cout<<m<<endl;
	f(i,0,n){
		ll temp=0;
	    f(j,0,ans[i]){
	    	if(flag[j]==0) temp++;
		}
	    cout<<ans[i]-temp<<" ";
	}
	cout<<endl;
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


