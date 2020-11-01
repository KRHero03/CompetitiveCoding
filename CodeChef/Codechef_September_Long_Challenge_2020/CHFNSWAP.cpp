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
		// fe(i,1,n) cout<<i<<" ";
		// cout<<endl;
		// ll s1 = 0;
		// fe(i,1,n){
		// 	s1 += i;
		// 	cout<<s1<<" ";
		// }
		// cout<<endl;
		ll sum = (n*(n+1))/2;
		if(sum%2){
			cout<<0<<endl;
			return;
		}
		ll ans = 0;
		ll low = 0, high = n;
		ll req = (n*(n+1))/4;
		while(low<=high){
			ll mid = (low+high)/2;
			ll val = (mid*(mid+1))/2;
			if(val>req){
				high = mid-1;
			}else{
				low = mid + 1;
			}
		}
		low--;
		sum = (low*(low+1))/2;
		//cout<<low<<endl;
		if(sum==req){
			ans += (low*(low-1))/2;
			ll val = n - low;
			ans += (val*(val-1))/2;
			low--;
		}
		while(true){
			sum = (low*(low+1))/2;
			ll diff = req - sum;
			//cout<<low<<" "<<sum<<" "<<req<<" "<<diff<<endl;
			if(diff>(n-1)) break;
			ans += min(n-low,min(diff,n-diff));
			//cout<<diff<<" "<<n-diff<<" "<<low<<endl;
			low--;
		}
		cout<<ans<<endl;
	}
	int main(){
		whilet(){
			solve();			
		}	
		
	}


