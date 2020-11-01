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
	ll n,a,b,c;
    cin >> n >> a >> b >> c;
    if(n==a && n==b && n==c){
        f(i,0,n) cout<<n<<" ";
        cout<<endl;
        return;
    }
    if(n>1 && a==b && b==c && a==1){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    if(a+b-c>n){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    if(a==b && a==c){
        f(i,0,a-1) cout<<n<<" ";
        f(i,a-1,n-1) cout<<n-1<<" ";
        f(i,n-1,n) cout<<n<<" ";
        cout<<endl;
        return; 
    }
    ll isSwapped = 0;
    if(a>b){
        swap(a,b);
        isSwapped = 1;
    }
    vector<ll> ans(n,0);
    ll minA = n - 1;
    ll i = 0;
    while(i<a-c){
        ans[i] = n-1;
        i++;
    }
    ll inc = 0;
    while(inc<c){
        ans[i] = n;
        i++; 
        inc++;
    }
    ll j = n-1;
    inc = 0;
    while(inc<b-c){
        ans[j] = n-1;
        j--;
        inc++;
    }

    for(int k=i;k<=j;k++) ans[k] = n-2;
    if(isSwapped) reverse(ans.begin(),ans.end());
    for(auto i: ans) cout<<i<<" ";
    cout<<endl;
	
}
int main(){
	int t;
    cin >> t;
    int q = 1;
    while(q<=t){
        cout<<"Case #"<<q<<": ";
		solve();		
        q++;	
	}	
	
}


