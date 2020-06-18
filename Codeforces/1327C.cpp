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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
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
	ll n,m,k,temp,temp1;
	cin >> n >> m >> k;
	string s="";
	ll ans=0;
	vector <pair<ll,ll>> initial,final;
	f(i,0,k){
		cin >> temp >> temp1;
		initial.pb(mp(temp,temp1));
	}
	f(i,0,k){
		cin >> temp >> temp1;
		final.pb(mp(temp,temp1));
	}
    f(i,0,m-1){
        s+='L';
        ans++;
    }
    f(i,0,n-1){
        s+='U';
        ans++;
    }
    f(i,0,n){
        if(i%2==0){
            f(j,0,m-1){
                s+='R';
                ans++;
            }
            if(i<n-1){
				s+='D';
	            ans++;
			}
        }else{
            f(j,0,m-1){
                s+='L';
                ans++;
            }
            if(i<n-1){
				s+='D';
	            ans++;
			}
        }
    }
    cout<<ans<<endl<<s<<endl;
}
int main(){	
	solve();	
}


