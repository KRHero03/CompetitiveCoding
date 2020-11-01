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
    sort(arr.rbegin(),arr.rend());
    ll max1 = arr[0],max2=arr[1],max3=arr[2],max4=arr[3],max5=arr[4];
    ll min1 = arr[n-1],min2 = arr[n-2],min3=arr[n-3],min4=arr[n-4],min5=arr[n-5];
    ll ans = max1*max2*max3*max4*max5;
    ans = max(ans,max1*max2*max3*min1*min2);
    ans = max(ans,max1*min1*min2*min3*min4);
    ans = max(ans,min1*min2*min3*min4*min5);
    cout<<ans<<endl;
    return;
    
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}