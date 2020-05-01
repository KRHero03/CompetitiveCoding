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
	ll n;
    cin >> n;
    if(n<=1000){
    	cout << "1 1" << "\n";
        int resl = n - 1;
        int i = 2, j, k = 2;
        if(n > 1) {
            while(resl - i + 1 >= 0) {
                cout << i << " " << k << "\n";
                resl -= i - 1;
                i++;
            }
            if(resl > 0) {
                cout << i - 1 << " " << 1 << "\n";
                resl--;
                i++;
                while(resl > 0) {
                    cout << i - 1 << " " << 1 << "\n";
                    i++;
                    resl--;
		 		}
			}
		}
	}
	n-=30;
	ll arr[50];
	f(i,0,50) arr[i]=0;
	for(ll i=30;i>=2;i--){
		if(n+1>1LL<<(i-1)){	
			n-=(1LL<<(i-1))-1;
			arr[i]=1;
		}
	}
	ll flag=0;
    fe(i,1,30){
    	if(flag){
    		if(arr[i]){
    			for(ll j=i;j>=1;j--){
    				cout<<i<<" "<<j<<endl;
				}
				flag=0;
			}else{
				cout<<i<<" "<<i<<endl;
			}
		}else{
			if(arr[i]){
				fe(j,1,i){
					cout<<i<<" "<<j<<endl;
				}
				flag=1;
			}else{
				cout<<i<<" "<<1<<endl;
			}
		}
	}
	if(n>0){
		fe(i,31,31+n){
			if(flag){
				cout<<i<<" "<<i<<endl;
			}else{
				cout<<i<<" "<<1<<endl;
			}
		}
	}
	
}
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin >> t;
	int q=1;
	while(q<=t)
	{
		cout<<"Case #"<<q<<": "<<endl;
		solve();			
		q++;
	}	
	
}


