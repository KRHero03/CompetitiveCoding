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
	ll n,m,temp;
	cin >> n >> m;
    vector<ll> arr(n,1),arr1(m,1);
    f(i,0,n){
        f(j,0,m){
            cin >> temp;
            if(temp==1){
                arr[i]=0;
                arr1[j]=0;
            } 

        }
    }
    ll sum = 0,sum1 = 0;
    f(i,0,n) sum+=arr[i];
    f(i,0,m) sum1+=arr1[i];
    ll p = min(sum,sum1);
    if(p%2==0){
        cout<<"Vivek"<<endl;
        return;
    }
    cout<<"Ashish"<<endl;
    return;
	
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


