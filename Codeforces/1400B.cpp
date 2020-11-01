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
	ll p,f,cnts,cntw,s,w;
    cin >> p >> f;
    cin >> cnts >> cntw;
    cin >> s >> w;
    if(s>w){
        swap(s,w);
        swap(cnts,cntw);
    }
    ll countSP = p/s;
    ll countSF = f/s;
    if(countSP+countSF>=cnts){
        ll ans = 0;
        for(int i = 0;i<=cnts;i++){
            if(i*s>p) break;
            if((cnts-i)*s>f) continue;
            ll cntW = cntw;
            ll countWP = min((p-i*s)/w,cntW);
            cntW -= min((p-i*s)/w,cntW);
            ll countWF = min((f-(cnts-i)*s)/w,cntW);
            //cout<<"D"<<countWP<<" "<<countWF<<endl;
            ans = max(ans,countWP+countWF+cnts);
        }
        cout<<ans<<endl;
    }else{
        cout<<countSP+countSF<<endl;
        return;
    }
	return;
}
int main(){
	fastio;
	whilet(){
		solve();			
	}	
	
}


