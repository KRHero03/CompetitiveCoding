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
	ll l,r,m;
    cin >> l >> r >> m;
    ll rem = INT_MAX;
    ll neg = 1;
    ll a = l;
    fe(i,l,r){
        ll n = m/i;
        ll rem1 = m - n*i;
        ll rem2 = (n+1)*i - m;
        if(n==0){
            if(rem2<rem){
                a = i;
                rem = rem2;
                neg = 1;
            }
            continue;
        }
        if(rem2>rem1){
            if(rem1<rem){
                rem = rem1;
                a = i;
                neg = 0;
            }
        }else{
            if(rem2<rem){
                rem = rem2;
                a = i;
                neg = 1;
            }

        }
    }
    if(neg==1){
        cout<<a<<" "<<r-rem<<" "<<r<<endl;
        return;
    }else{
        cout<<a<<" "<<l+rem<<" "<<l<<endl;
        return;
    }
	
}

int main(){
	
	whilet(){
		solve();			
	}	
	
}


