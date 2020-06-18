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
	scanf("%d",&n);
	if(n==1){
		printf("%d\n%d %d\n",1,1,1);
		return;
	}
	printf("%d\n",n/2);
	f(i,0,n/2-1){
		printf("%d %d %d\n",2,2*i+1,2*i+2);
		//cout<<2<<" "<<2*i+1<<" "<<2*i+2<<endl;
	}
	if(n%2!=0){		
		printf("%d %d %d %d\n",3,n-2,n-1,n);
		//cout<<3<<" "<<n-2<<" "<<n-1<<" "<<n<<endl;
	}else{
		
		printf("%d %d %d\n",2,n-1,n);
		//cout<<2<<" "<<n-1<<" "<<n<<endl;
	}

	return;
}
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	whilet(){
		solve();			
	}	
	
}


