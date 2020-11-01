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
	ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll q = 0,o = 0,z = 0;
    f(i,0,k){
        if(s[i]=='?') q++;
        if(s[i]=='0') z++;
        if(s[i]=='1') o++;
    }
    ll tQ = q, tZ = k/2 - z, tO = k/2 - o;
    if(tZ<0 || tO<0){
        cout<<"NO"<<endl;
        return;
    }
    f(i,k,n){
        if(s[i-k]=='?') q--;
        if(s[i-k]=='1') o--;
        if(s[i-k]=='0') z--;

        if(s[i]=='?') q++;
        if(s[i]=='1') o++;
        if(s[i]=='0') z++;
        ll qT = q, oT = k/2-o, zT = k/2-z;
        if(oT<0 || zT<0){
            cout<<"NO"<<endl;
            return;
        }
        ll diffQ = qT - tQ;
        ll diffO = oT - tO;
        ll diffZ = zT - tZ;
        //cout<<diffQ<<" "<<diffO<<" "<<diffZ<<endl;
        if((diffQ==diffO && diffZ==0) || (diffQ==diffZ && diffO==0)){

        }else{
            cout<<"NO"<<endl;
            return;
        }
        tO = oT;
        tZ = zT;
        tQ = qT;
    }
    cout<<"YES"<<endl;
    return;
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


