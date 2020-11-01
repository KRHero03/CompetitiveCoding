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
	string s;
    cin >> s;
    ll n = s.size();
    ll x;
    cin >> x;
    string w(n,'#');
    for(int i = 0;i<n;i++){
        if(s[i]=='0'){
            if(i+x<n) w[i+x] = '0';
            if(i-x>=0) w[i-x] = '0';
        } 
    }
    for(int i = 0;i<n;i++){
        if(s[i]=='1'){
            ll pass = 0;
            if(i+x<n && w[i+x]!='0'){
                w[i+x]='1';
                pass = 1;
            }
            if(i-x>=0 && w[i-x]!='0'){
                w[i-x]='1';
                pass = 1;
            }
            if(pass==0){
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    for(int i = 0;i<n;i++){
        if(w[i]=='#') w[i]='0';
    }
    cout<<w<<endl;
    return;

	return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


