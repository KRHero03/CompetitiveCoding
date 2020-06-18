#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		reverse(x.begin(),x.end());
		string ans="";
		if(x.length()==1){
			if(x[0]=='o' || x[0]=='s'|| x[0]=='x')
				ans="se";
			else if(x[0]=='f'){
				ans="se";
				x[0]='v';
			}else if(x[0]=='y'){
				ans="se";
				x[0]='i';
			}else{
				ans="s";
			}
		}else{
			if(x[0]=='o' || x[0]=='s'|| x[0]=='x' ||(x[0]=='h'&&x[1]=='c'))
				ans="se";
			else if(x[1]=='f'&&x[0]=='e'){
				ans="s";
				x[1]='v';
			}
			else if(x[0]=='f'){
				ans="se";
				x[0]='v';
			}else if(x[0]=='y'){
				ans="se";
				x[0]='i';
			}else{
				ans="s";
			}
			
		}
		ans = ans+x;
		reverse(ans.begin(),ans.end());
		cout<< ans<<endl;
	}
}
