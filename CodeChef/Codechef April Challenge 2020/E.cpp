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
#define MAX 100004
using namespace std;

void solve(){
	ll n,temp;
	scanf("%ld",&n);
	vector<ll> arr(n),po2(n);
	f(i,0,n){
		scanf("%ld",&arr[i]);
	}
	f(i,0,n){
		temp = 0;
		if(arr[i]==0){
			po2[i]=0;
			continue;
		}
		while(arr[i]%2==0){
			temp++;
			arr[i]/=2;
		}
		po2[i]=temp;
	}
	
	ll num1 = 0;
	unordered_map<ll, ll> prevSum;   
    ll currsum = 0;   
    f(i,0,n){   
        currsum += po2[i]; 
        if (currsum == 1)  
            num1++;         
  
        if (prevSum[currsum-1]!=0)  
            num1 += (prevSum[currsum - 1]); 
        prevSum[currsum]++; 
    } 
    
	ll ans = (n*(n+1))/2 - num1;
	printf("%ld\n",ans);
	return;
	
}
int main(){	
	//freopen("input.txt","r",stdin);	
	//fastio;
	whilet(){
		solve();			
	}	
	
}


