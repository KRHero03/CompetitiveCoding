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
    vector<ll> arr(n);
    for(auto& i: arr) cin >> i;
    sort(arr.begin(),arr.end());
    vector<ll> brr;
    brr.pb(arr[n-1]);
    ll gcdVal =  brr[0];
    vector<ll> flag(n,0);
    flag[n-1] = 1;
    f(i,1,n){
        ll temp = gcdVal;
        ll idx = 0, val = 0;
        f(j,0,n){
            if(flag[j]) continue;
            ll t1 = __gcd(gcdVal,arr[j]);
            if(t1>val){
                val = t1;
                idx = j;
            }
        }
        brr.pb(arr[idx]);
        gcdVal = val;
        flag[idx] =1;

    }
    for(auto i: brr) cout<<i<<" ";
    cout<<endl;
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


