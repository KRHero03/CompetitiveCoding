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
    unordered_map<ll,ll> umap;
    f(i,0,n){
        ll temp;
        cin >> temp;
        umap[temp]++;
    }
    ll mex1=0;
    fe(i,0,101){
       if(umap[i]==0){
           mex1 = i;
           break;
       }
       umap[i]--;
    }
    ll mex2=0;
    fe(i,0,101){
        if(umap[i]==0){
            mex2=i;
            break;
        }
        umap[i]--;
    }
    cout<<mex1+mex2<<endl;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}