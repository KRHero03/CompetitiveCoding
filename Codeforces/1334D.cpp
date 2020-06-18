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
	ll n,l,r,temp,temp1;
	cin >> n >> l >> r;
	if(l==n*(n-1)+1){
		cout<<1<<endl;
		return;
	}
	
	ll t=2*n-2;
    ll x=1;
    while(l>t){
        x++;
        t+=2*(n-x);
    }
    t-=2*(n-x);    
    
    vector <ll> ans;
    if((l-t)%2==0){
        ans.pb(x+(l-t)/2);
        if(x+(l-t)/2!=n){
            temp=x;
            temp1=x+(l-t)/2+1;
        }
        else{
            temp=x+1;
            temp1=x+2;
        }
    }else{
        temp=x;
        temp1=x+(l-t)/2+1;
    }
    
    while (ans.size()<r-l+1){
	    ans.pb(temp);
	    ans.pb(temp1);
	    if(temp1==n){
	        if(temp==n-1){
	            temp=1;
	        }
	        else{
	            temp++;
	            temp1=temp+1;
	        }
	    }
	    else{
	        temp1++;
	    }
	}
	
	f(i,0,r-l+1)
	    cout<<ans[i]<<" ";
	    cout<<"\n";   
    
    
	return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


