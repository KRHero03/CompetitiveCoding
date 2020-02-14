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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
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
	string s;
	cin >> s;
	ll n = s.size();
	vector <ll> temp(2*n,0);
	ll pointer = n;
	ll arr[26];
	f(i,0,26) arr[i] = 0;
	f(i,0,n){	
		if(temp[pointer]==0){
			temp[pointer] = s[i];
			arr[s[i]-'a'] = 1;
			continue;
		}
		if(temp[pointer+1]==s[i]){
			pointer++;
			arr[s[i]-'a'] = 1;
			continue;
		}
		if(temp[pointer-1]==s[i]){
			pointer--;
			arr[s[i]-'a'] = 1;
			continue;
		}
		if(temp[pointer+1]==0){
			if(arr[s[i]-'a']!=0){
				cout<<"NO"<<endl;
				return;
			}
			pointer++;
			temp[pointer] = s[i];
			arr[s[i]-'a'] = 1;
			continue;
		}
		if(temp[pointer-1]==0){
			if(arr[s[i]-'a']!=0){
				cout<<"NO"<<endl;
				return;
			}
			pointer--;
			temp[pointer] = s[i];
			arr[s[i]-'a'] = 1;
			continue;
		}
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	for(auto i:temp){
		if(i==0) continue;
		char x = i;
		cout<<x;
		
	}
	f(i,0,26){
		if(arr[i]==0){
			char x = i+97;
			cout<<x;
		}
	}
	cout<<endl;
	
	
}
int main(){
	whilet(){
		solve();			
	}	
	
}


