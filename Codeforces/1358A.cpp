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
    ll n,m;
    cin >> n >> m;
    
    if(n==1){
        cout<<(ll)ceil((double)m/2.0)<<endl;
        return;
    }
    if(m==1){
        cout<<(ll)ceil((double)n/2.0)<<endl;
        return;
    }
    if((n*m)%2==0){
        cout<<(n*m)/2<<endl;
        return;
    }
    ll ans = (n/2)*m + (ll)ceil((double)m/2.0);
    cout<<ans<<endl;
    return;
}
int main(){
	whilet(){
		solve();			
	}		
}


