/*
	author: KRHero
	IDE: VSCode	
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
	ll n,x,temp,temp1,sum=0;
    cin >> n >> x;
    f(i,0,n-1){
        cin >> temp >> temp1;
        if(temp==x || temp1==x) sum++;
    }
    if(sum==1 || n==1){
        cout<<"Ayush"<<endl;
        return;
    }
    ll p = n-2;
    if(p%2==0) cout<<"Ayush"<<endl;
    else cout<<"Ashish"<<endl;
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


