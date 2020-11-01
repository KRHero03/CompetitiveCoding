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
	ll n,s;
    cin >> n >> s;
    vector<ll> arr(n);
    for(auto& i: arr) cin >> i;
    vector<ll> pre(n+1,0);
    f(i,1,n+1) pre[i] = pre[i-1] + arr[i-1];
    vector<ll> prec(n+1,0);
    f(i,1,n+1) prec[i] = prec[i-1] + i;
    ll ans = 0,low = 0,high = n;
    while(low<=high){
        ll mid =  (low + high)/2;
        ll flag = 0;
        if(mid==n){
            ll val = pre[n] + n*(prec[n]);
            if(val<=s){
                ans = n;
                low = mid + 1;
            }else{
                high = mid-1;
            }
            continue;
        }
        f(i,0,n-mid){
            ll val = pre[i+mid] - pre[i] + mid*(prec[i+mid]-prec[i]);
            if(val<=s){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            high = mid-1;
        }else{
            low = mid + 1;
            ans = mid;
        }
    }
    cout<<ans<<endl;
	
}
int main(){
	
	solve();	
	
}


