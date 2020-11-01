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
    vector<ll> ans(n+1,0);
    queue<ll> q;
    fe(i,1,n) q.push(i); 
    f(i,0,2*n){
        if(q.size()<=1) break;
        ll low = q.front();
        q.pop();
        ll high = q.front();
        q.pop();
        ll val,val1;
        cout<<"? "<<low<<" "<<high<<endl;
        cin >> val;
        cout<<"? "<<high<<" "<<low<<endl;
        cin >> val1;
        if(val<val1){
            ans[high] = val1;   
            q.push(low);         
        }else{
            ans[low] = val;
            q.push(high);
        }
        
    }
    f(i,1,n+1) if(ans[i]==0) ans[i] = n;
    cout<<"! ";
    f(i,1,n+1) cout<<ans[i]<<" ";
    cout<<endl;
	
}
int main(){
	solve();
	
}


