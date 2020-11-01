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
    string s;
    cin >> s;
    vector<ll> freq;
    char temp = s[0];
    ll cnt = 1;
    f(i,1,n){
        if(s[i]==temp){
            cnt++;
        }else{
            freq.pb(cnt);
            cnt = 1;
            temp = s[i];
        }
    }
    freq.pb(cnt);
    ll ans = 0;
    ll marker = 0;
    ll size = freq.size();
    ll bMarker = size-1;
    //for(auto i: freq) cout<<i<<" ";
    //cout<<endl;
    f(i,0,size){
        ll flag = 0;
        while(marker<size && freq[marker]<=1) marker++;
        if(marker==size){
            while(bMarker>=i && freq[bMarker]<=0) bMarker--;
            freq[bMarker]--;
        }else{
            freq[marker]--;
        }
        //cout<<marker<<" "<<bMarker<<endl;
        freq[i] = 0;
        while(i<size && freq[i]==0) i++;
        i--;
        ans++;
    }
    
    cout<<ans<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


