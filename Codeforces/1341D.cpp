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
#define MAX 2005
using namespace std;


ll dp[MAX][MAX];
string nums[] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
vector<ll> ans;
ll n;
vector<string> s;

bool solve1(ll pos, ll k){
    if(pos==n) return k==0;
    if(dp[pos][k]!=-1) return dp[pos][k];
    for(int i = 9;i>=0;i--){
        ll c=0,pass=1;
        f(j,0,7) {
        	if(s[pos][j]=='1' && nums[i][j]=='0'){
        		pass=0;
        		break;
			}
        	if(s[pos][j]!=nums[i][j] && nums[i][j]!=0){
        		c++;
			} 
		}
        if(k>=c && pass==1) {
            if(solve1(pos+1,k-c)) {
				ans.pb(i); 
				dp[pos][k]=1;
				return 1;
			}
        }
    }
    dp[pos][k]=0;
    return 0;
}

void solve(){
	ll k;
	string temp;
	cin >> n >> k;
	f(i,0,MAX) f(j,0,MAX) dp[i][j]=-1;
	f(i,0,n){
		cin >> temp;
		s.pb(temp);
	}
	if(solve1(0,k)){
        for(int i = n-1;i>=0;i--) cout<<ans[i];
        return;
    }else cout<<-1<<endl;
}
int main(){
	
	solve();	
	
}


