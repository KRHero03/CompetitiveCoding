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
    ll threes = 0, fives = 0, sevens = 0;
    sevens = n/7;
    ll rem = n%7;
    if(n==1 || n==4 || n==2){
        cout<<-1<<endl;
        return;
    }
    if(n==11){
        cout<<"2 1 0"<<endl;
        return;
    }
    if(n==3){
        cout<<"1 0 0"<<endl;
        return;
    }
    if(n==5){
        cout<<"0 1 0"<<endl;
        return;
    }
    if(n==6){
        cout<<"2 0 0"<<endl;
        return;
    }
    switch(rem){
        case 0:
            cout<<0<<" "<<0<<" "<<sevens<<endl;
            break;
        case 1:
            cout<<1<<" "<<1<<" "<<sevens-1<<endl;
            break;
        case 2:
            cout<<3<<" "<<0<<" "<<sevens-1<<endl;
            break;
        case 3:
            cout<<0<<" "<<2<<" "<<sevens-1<<endl;
            break;
        case 4:
            cout<<1<<" "<<3<<" "<<sevens-2<<endl;
            break;
        case 5:
            cout<<0<<" "<<1<<" "<<sevens<<endl;
            break;
        case 6:
            cout<<2<<" "<<0<<" "<<sevens<<endl;
            break;
    }
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


