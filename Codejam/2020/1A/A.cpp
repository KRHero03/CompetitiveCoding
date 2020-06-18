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
	ll n,m;
	cin >> n;
	string temp;
	vector <string> arr;
	ll size,cur=0;
	f(i,0,n){
		cin >> temp;
		size = temp.size();
		ll count=0;
		f(j,0,size){
			if(temp[j]!='*') count++;
		}
		if(count>cur){
			cur = count;
		}
		arr.pb(temp);
	}
	vector<string> largest;
	for(auto i: arr){
		ll size=  i.size();
		ll count=0;
		f(j,0,size){
			if(i[j]!='*') count++;
		}
		if(count==cur){
			largest.pb(i);
		}
	}
	string final = largest[0];
	string tp="";
	size = final.size();
	for(auto s: arr){
		ll size = s.size();
		ll c=0;
		vector<string> match;
		string str="";
		ll start=0,end=0;
		f(i,0,size){
			if(s[i]!='*'){
				str.pb(s[i]);
				if(i==0) start=1;
				continue;
			}
			if(str.size()>0){
				match.pb(str);
				str="";
			}
		}
		if(str.size()>0) {
			match.pb(str);
			end=1;
		}
		
		ll x=0;
		if(start==1){
			ll temp = final.find(match[0],x);
			if(temp!=0){
				cout<<"*"<<endl;
				return;
			}
			x=temp+1;
		}
		
		if(end==1){
			ll matchSize = match[match.size()-1].size();
			
			ll temp=final.find(match[match.size()-1],size-matchSize-1);
			if(temp!=size-matchSize-1){
				cout<<"*"<<endl;
				return;
			}
		}
		ll matchSize = match.size();
		ll st = 0?start==0:1;
		ll e = matchSize?end==0:matchSize-1;
		f(i,st,e){
			ll temp = final.find(match[i],x);
			if(temp==string::npos){
				ll pass=0;
				f(j,x,size){
					if(final[j]=='*'){
						x=j+1;
						pass=1;
					}
				}
				if(pass==0){				
					cout<<'*'<<endl;
					return;
				}
			}
			x=temp+1;
		}
	}
	f(i,0,size){
		if(final[i]!='*') tp.pb(final[i]);
	}
	cout<<tp<<endl;
	return;
	
}

void solve1(){
	ll i,j,k,index,flag=0,flag1=0,n;
	cin >> n;
	string ans,start,temp,mid;
	vector<char> v,v1;
	vector<string> s;
	f(i,0,n){
		cin >> temp;
		s.pb(temp);
	}
	f(i,0,n){
		k=0;
		j=0;
		index=v.size();
		flag=0;
		flag1=0;
		while(s[i][j]!='*' && j<s[i].length()){
			if(j<index && v[j]!=s[i][j]){
				cout<<'*'<<endl;
				return;
			}
			if(j>=index){
				v.pb(s[i][j]);
			}
			j++;
		}	
	}
	f(i,0,n){
		k=0;
		j=s[i].length()-1;
		index=v1.size();
		flag=0;
		flag1=0;
		while(s[i][j]!='*' && j>=0){
			if(s[i].length()-1-j<index && v1[s[i].length()-1-j]!=s[i][j]){
				cout<<'*'<<endl;
				return;
			}
			if(s[i].length()-1-j >=index){
				v1.pb(s[i][j]);
			}
			j--;
		}
	}
	temp="";
 	f(i,0,n){
 		flag=0;
 		j=0;
 		while(j<s[i].length()){
 			if(s[i][j]=='*'){
 				flag=1;
 				j++;
			 }
			 if(flag){
			 	while(s[i][j]!='*' && j<s[i].length()){
					temp+=s[i][j];
					j++;
				}
				if(j!=s[i].length()){
					ans+=temp;
					temp="";
				}
				flag=0;
			 }else{
			 	j++;
			 }
		 }
	}
  	
	ll size = v.size();
	f(i,0,size){
		ans = v[size-1-i]+ans;
	}	
	ll size1= v1.size();
	f(i,0,v1.size()){
		ans=ans+v1[v1.size()-1-i];
	}
	cout<<ans<<endl;
	return;
}

int main(){
	int t;
	cin >> t;
	int q=1;
	while(q<=t)
	{
		cout<<"Case #"<<q<<": ";
		solve1();			
		q++;
	}	
	
}


