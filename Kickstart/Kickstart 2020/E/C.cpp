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
    vector<pair<ll,ll>> arr(n);
    for(auto& i: arr) cin >>i.F>>i.S;
    
    ll removed = 0, time = 0;
    for(int i = 1;i<pow(2,n);i++){
        vector<pair<ll,ll>> a;
        ll tRemove = 0,tTime = 0;
        f(j,0,n){
            if(((i>>j)&1)==1){
                a.pb(arr[j]);
            }else tRemove++;
        }
        ll eSum = 0;
        //cout<<"FORMED ARRAY:- "<<i<<endl;
        for(auto i: a){
            eSum+=i.F;
            //cout<<i.F<<" "<<i.S<<endl;
        }
        ll idx = -1;
        ll n = a.size();
        f(i,0,n){
            ll temp = eSum - a[i].F;
            if(temp<a[i].S){
                idx = i;
                break;
            }
        }
        if(idx==-1){
            tTime = LLONG_MAX;
        }else{
            tTime += eSum;
            f(i,0,idx) tTime+=a[i].F;
        }
        if(tTime>time){
            time = tTime;
            removed = tRemove;
        }else if(tTime==time){
            removed = min(tRemove,removed);
        }
    }
    if(time==LLONG_MAX){
        cout<< removed<<" "<<"INDEFINITELY"<<endl;
        return;
    }
    cout<<removed<<" "<<time<<endl;
    return;
	
}

void solve1(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> arr(n);
    for(auto& i: arr) cin >>i.F>>i.S;
    vector<pair<ll,ll>> r;
    ll eSum = 0;
    ll cnt = 0;
    for(auto i : arr){
        eSum += i.F;
        r.push_back({i.S+i.F,cnt++});
    }
    sort(r.begin(),r.end(),[](pair<ll,ll> p1,pair<ll,ll> p2){
        if(p1.F<p2.F) return true;
        if(p1.F==p2.F){
            if(p1.S<p2.S) return false;
            return true;
        }
        return false;
    });
    vector<ll> r1(n),idx(n);
    f(i,0,n){
        r1[i] = r[i].F;
        idx[i] = r[i].S;
    }
    ll maxTime = eSum,removed = 0;
    while(true){
        auto i = lower_bound(r1.begin(),r1.end(),eSum);
        if(i==r1.end()){
            cout<<removed<<" "<<"INDEFINITELY"<<endl;
            return;
        }
        ll i1 = i - r1.begin();
        
    }
}

int main(){
    
	int t;
    cin >> t;
    int q = 1;
    while(q<=t){
        cout<<"Case #"<<q<<": ";
		solve1();		
        q++;	
	}	
	
}


