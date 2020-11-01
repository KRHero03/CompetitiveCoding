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
struct Tree{
    vector<pair<ll,ll>> arr;
    ll size;
    void init(ll n){
        size = 1;
        while(size*2<n) size*=2;
        arr.assign(size*2,{0,0});
    }

    void set(ll i,ll v,ll x,ll lx,ll rx){
        if(rx-lx==1){
            arr[x].F = v;
            arr[x].S = i;
            return;
        }
        ll mid = (lx + rx)/2;
        if(i<mid)
            set(i,v,2*x+1,lx,mid);
        else
            set(i,v,2*x+2,mid,rx);
        if(arr[2*x+1].F>arr[2*x+2].F){
            arr[x].F = arr[2*x+1].F;
            arr[x].S = arr[2*x+1].S;
        }else{
            arr[x].F = arr[2*x+2].F;
            arr[x].S = arr[2*x+2].S;
        }
    }
    void set(ll i,ll v){
        set(i,v,0,0,size);
    }

    pair<ll,ll> get(ll l,ll r,ll x,ll lx,ll rx){
        if(r<lx || rx<l){
            return {0,0};
        }
        if(l<=lx && r<=rx){
            return arr[x];
        }
        ll mid = (lx + rx)/2;
        pair<ll,ll> p1 = get(l,r,2*x+1,lx,mid);
        pair<ll,ll> p2 = get(l,r,2*x+2,mid,rx);
        if(p1.F>p2.F) return p1;
        return p2;
    }
    pair<ll,ll> get(ll l,ll r){
        return get(l,r,0,0,size);
    }



};
void solve(){
    Tree tr;
	ll n,q;
    cin >> n >> q;
    tr.init(n);
    vector<ll> quality(n),quantity(n);
    f(i,0,n){
        cin >> quality[i];
        tr.set(i,quality[i]);
    }
    for(auto& i: quantity) cin >> i;
    while(q--){
        ll t;
        cin >> t;
        if(t==1){
            ll l,r,qt;
            cin >> l >> r >> qt;
            l--;            
            pair<ll,ll> p1 = tr.get(l,r);
            ll maxQual = p1.F;
            ll idx = p1.S;
            quantity[idx]+=qt;
        }else{
            ll v,i,qt,thr;
            cin >> v >> i >> qt >> thr;
            i--;
            ll l = max(0LL,i-v);
            ll r = min(n,i+v);
            pair<ll,ll> p1 = tr.get(l,r);
            ll maxQual = p1.F;
            ll idx = p1.S;
            if(maxQual<thr || quantity[idx]<qt){
                cout<<"No purchase"<<endl;
                continue;
            }
            quantity[idx]-=qt;
            cout<<idx+1<<endl;
        }
    }
    return;
}
int main(){
	fastio;
    whilet()
	    solve();
	
}


