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

bool prime(int x) {
    if (x == 2 || x == 3) return true;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}
 
void solve(){
    ll n;
    cin >> n;
    vector<ll> factors;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            factors.pb(i);
            if(i!=n/i) factors.pb(n/i);
        }
    }
    factors.pb(n);
    sort(factors.begin(),factors.end());
    if(factors.size()==3 && prime(factors[0]) && prime(factors[1])){
        for(auto i: factors) cout<<i<<" ";
        cout<<endl;
        cout<<1<<endl;
        return;
    }
        
    unordered_map<ll,bool> used;
    vector<ll> primes;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            primes.pb(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) primes.pb(n);
 
    vector<ll> arr(primes.size());

    for(int i = 0;i<primes.size();i++){
        int p = primes[i];
        int q = primes[(i+1)%(primes.size())];
        for(int j = 0;j<factors.size();j++){
            if(!used[factors[j]] && factors[j] % p == 0 && factors[j] % q == 0) {
                used[factors[j]] = true;
                arr[i] = factors[j];
                break;
            }
        }
    }
    
    for(int i =0;i<primes.size();i++){
        int p = primes[i];
        used[p] = true;
        cout<<p<<" ";
        for(int j=0;j<factors.size();j++){
            if(!used[factors[j]] && factors[j]%p==0){
                used[factors[j]] = true;
                cout<<factors[j]<<" ";
            }
        }
        if(primes.size()>1) cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<0<<endl;

}

int main(){	
    whilet()
		solve();
}


