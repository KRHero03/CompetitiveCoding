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
	string s;
    cin >> s;
    ll n = s.size();
    vector<ll> zero,one;
    zero.pb(0);
    one.pb(0);
    f(i,0,n){
        if(s[i]=='0'){
            zero.pb(zero[i]+1);
            one.pb(one[i]);
        }else{
            zero.pb(zero[i]);
            one.pb(one[i]+1);
        }
    }
    // for(auto i: zero) cout<<i<<" ";
    // cout<<endl;

    // for(auto i: one) cout<<i<<" ";
    // cout<<endl;
    ll ans = min(n-zero[n],n-one[n]);
    f(i,1,n+1){
        ans = min(ans,abs(i-zero[i])+abs(n-i-one[n]+one[i]));
        ans = min(ans,abs(i-one[i])+abs(n-i-zero[n]+zero[i]));
    }
    cout<<ans<<endl;
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


