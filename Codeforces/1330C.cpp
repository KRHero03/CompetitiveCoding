/*
	author: KRHero
	IDE: DevCPP		
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
	ll n,m,s=0,temp;
	cin >> n >> m;
    vector<ll> a(m);
    ll sum = 0;
    f(i,0,m){
        cin >> a[i];
        sum += a[i];
    }
    vector<ll> b = a;
    if (sum < n) {
        cout << -1 << endl;
        return;
    }
    ll need = sum - n;
    f(i,0,m){
        ll free = min(need, a[i] - 1);
        need -= free;
        a[i] -= free;
    }
    int pos = 1;
    vector<ll> res;
    f(i,0,m){
        //cout << c << " ";
        if (pos > n - b[i] + 1) {
            cout << -1 << endl;
            return;
        }
        res.pb(pos);
        //cout << pos << " ";
        pos += a[i];
    }
    for (auto &c : res)
        cout << c << " ";
	
}
int main(){	
		solve();	
	
}


