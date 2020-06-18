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
	ll n,s,e;
	cin >> n;
	vector<pair<pair<ll,ll>,ll>> arr;
	f(i,0,n){
		cin >> s >> e;
		arr.pb(mp(mp(s,e),i));
	}
	sort(arr.begin(),arr.end());
	vector <ll> start,end,index;
	f(i,0,n){
		start.pb(arr[i].F.F);
		end.pb(arr[i].F.S);
		index.pb(arr[i].S);
	}
	string ans(n,'0');
	ll j = end[0];
	ans[index[0]]='J';
	while(true){
		ll lower = lower_bound(start.begin(),start.end(),j)-start.begin();
		if(lower==n)
			break;
		ans[index[lower]]='J';
		j = end[lower];
	}
	vector<ll> start1,end1,index1;
	f(i,0,n){
		if(ans[index[i]]=='0'){
			start1.pb(start[i]);
			index1.pb(index[i]);
			end1.pb(end[i]);
		}
	}
	ll size = start1.size();
	
	if(size==0){
		cout<<ans<<endl;
		return;
	}
	j = end1[0];
	ans[index1[0]]='C';
	while(true){
		ll lower = lower_bound(start1.begin(),start1.end(),j)-start1.begin();
		if(lower==size)
			break;
		ans[index1[lower]]='C';
		j = end1[lower];
	}
	f(i,0,n){
		if(ans[i]=='0'){
			cout<<"IMPOSSIBLE"<<endl;
			return;
		}
	}
	cout<<ans<<endl;
	
}
int main(){
	
	//freopen("input.txt","r",stdin);
	ll t;
	cin >> t;
	ll q = 1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();	
		q++;		
	}	
	
}


