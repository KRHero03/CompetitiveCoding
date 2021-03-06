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
    for(auto& x : arr) cin >> x;
    ll ans = 1;
    ll temp = 2;
    int diff = 0;
    f(i,1,n){
        if(i==1){
            diff = arr[i]-arr[i-1];
            continue;
        }
        if(arr[i]-arr[i-1]==diff) temp++;
        else{
            ans = max(temp,ans);
            diff = arr[i]-arr[i-1];
            temp=2;
        }
    }
    ans = max(ans,temp);
    cout<<ans<<endl;
    return;
	
}
int main(){
	int t;
    cin >> t;
    int q = 1;
    while(q<=t){
        cout<<"Case #"<<q<<": ";
		solve();		
        q++;	
	}	
	
}


