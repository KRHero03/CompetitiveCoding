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
    ll ans = 0;
    ll base = 2;
    ll sum = 0;
    ll num = 1LL<<21 - 1;
    cout<<1<<" "<<num<<endl;
    cin >> sum;
    sum -= num*n;
    if(sum%2) ans=1;
    f(i,1,20){        
        cout<<1<<" "<<base<<endl;
        ll mSum;
        ll ones;
        cin >> mSum;
        if(mSum>sum){
            ll val = mSum - sum;
            val /= base;
            ones = (n-val)/2;
            if(ones%2){
                ans+=base;
            }
        }else if(mSum<sum){
            ll val = sum - mSum;
            val /= base;
            ones = (n+val)/2;
            if(ones%2){
                ans+=base;
            }
        }else{
            ones = n/2;
            if(ones%2) ans+=base;
        }
        base*=2;
    }
    cout<<2<<" "<<ans<<endl;
	cin >> ans;
    return;
}
int main(){
	whilet(){
		solve();
	}	
	
}


