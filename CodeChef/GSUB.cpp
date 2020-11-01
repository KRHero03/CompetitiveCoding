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
	ll n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    f(i,0,n) cin >> arr[i];
    ll ans = 1;
    f(i,1,n){
        if(arr[i]!=arr[i-1]) ans++;        
    }
    while(q--){
        ll pos,y;
        cin >> pos >> y;
        pos--;
        if(y==arr[pos]){
            cout<<ans<<endl;
            continue;
        }
        if(pos+1<n && arr[pos+1]==arr[pos]){
            ans++;
        }else if(pos+1<n && arr[pos+1]==y){
            ans--;
        }
        if(pos-1>=0 && arr[pos-1]==arr[pos]){
            ans++;
        }else if(pos-1>=0 && arr[pos-1]==y){
            ans--;
        }
        arr[pos] = y;
        cout<<ans<<endl;
    }
    return;
}
int main(){
	fastio;
	whilet(){
		solve();			
	}	
	
}


