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
#define whilet() int t; cin >> t;while(t--)
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
    if(n<31){
        cout<<"NO"<<endl;
        return;
    }
	ll x = n - 30;
    cout<<"YES"<<endl;
    if(x==14){
        cout<<"6 21 10 7"<<endl;
        return;
    }
    if(x==10){
        cout<<"6 5 15 14"<<endl;
        return;
    }
    if(x==6){
        cout<<"6 10 15 5"<<endl;
        return;
    }
    cout<<"6 10 14 "<<x<<endl;
    return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


