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
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832

using namespace std;

void solve(){
	ll n,x,temp;
    cin >> n >> x;
    ll ne=0,no=0;
    f(i,0,n){
        cin >> temp;
        if(temp%2==0) ne++;
        else no++;
    }
    if(no==0){
        cout<<"No"<<endl;
        return;
    }
    if(ne==0 && x%2==0){
        cout<<"No"<<endl;
        return;
    }
    for(int i = 1;i<=no;i+=2){
        if(ne>=x-i){            
            cout<<"Yes"<<endl;
            return;
        }
    }
    
    cout<<"No"<<endl;
    return;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


