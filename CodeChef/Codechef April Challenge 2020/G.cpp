/*
	author: KRHero
	IDE: DevCPP		
*/

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define MOD 998244353
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

ll add(ll a,ll b){
	return (a + b)%MOD;
}

ll mul(ll a,ll b){
	return (a%MOD * b%MOD)%MOD;
}

ll binexp(ll a, ll b){
	ll res = 1;
	ll temp =a;
	while(b){
		if(b&1){
			res = mul(res,temp);
		}
		b = b>>1;
		temp = mul(temp,temp);
	}
	return res;
}

ll inverseMod(ll a){
	return binexp(a,MOD-2);
}

void solve(){
	string s;
	cin >> s;
	ll size = s.size(),count=0;
	
	
	string postfix="";
	stack<char> st;
	f(i,0,size){
		if(s[i]=='#'){
			postfix+='#';
			count++;
		}else if(s[i]=='('){
			st.push('(');
		}else if(s[i]=='&' || s[i]=='|' || s[i]=='^'){
			st.push(s[i]);
		}else if(s[i]==')'){
			char top = st.top();
			while(top!='('&& !st.empty()){
				postfix+=top;
				st.pop();
				top = st.top();				
			}
			if(st.top()=='(') st.pop();
		}
	}
	while(!st.empty()){
		postfix+=st.top();
		st.pop();
	}
	
	
	ll q = binexp(4,count);
	q = inverseMod(q);
	
	size = postfix.size();
	stack<vector<ll>> mainStack;
	f(i,0,size){
		if(postfix[i]=='#'){
			vector<ll> temp (4,1);
			mainStack.push(temp);
		}
		if(postfix[i]=='|'){
			vector<ll> temp = mainStack.top();
			mainStack.pop();
			vector<ll> temp1 = mainStack.top();
			mainStack.pop();
			vector<ll> arr(4,0);
			
			//Calculate Probability of 1
			ll var1,var2;
			ll sum = 0;
			f(i,0,4){
				sum = add(sum,temp1[i]);
			}
			var1 = mul(temp[1],sum);
			sum = 0;
			sum = add(add(add(sum,temp[0]),temp[2]),temp[3]);
			var1 = add(var1,mul(sum,temp1[1]));
			var2 = add(mul(temp[2],temp1[3]),mul(temp[3],temp1[2]));
			arr[1] = add(var1,var2);
			
			//Calculate Probability of 0
			arr[0] = mul(temp[0],temp1[0]);
			
			//Calculate Probability of a
			arr[2] = add(mul(temp[2],temp1[2]),add(mul(temp[0],temp1[2]),mul(temp[2],temp1[0])));
			
			//Calculate Probability of A
			arr[3] = add(mul(temp[3],temp1[3]),add(mul(temp[0],temp1[3]),mul(temp[3],temp1[0])));
			
			mainStack.push(arr);			
		}
		if(postfix[i]=='&'){
			vector<ll> temp = mainStack.top();
			mainStack.pop();
			vector<ll> temp1 = mainStack.top();
			mainStack.pop();
			vector<ll> arr(4,0);
			
			ll var1,var2;
			//Calculate Probability of 1			
			arr[1] = mul(temp[1],temp1[1]);
			
			//Calculate Probability of 0
			ll sum = 0;
			f(i,0,4){
				sum = add(sum,temp1[i]);
			}
			var1 = mul(temp[0],sum);
			sum = 0;			
			sum = add(add(add(sum,temp[1]),temp[2]),temp[3]);
			var1 = add(var1,mul(sum,temp1[0]));
			var2 = add(mul(temp[2],temp1[3]),mul(temp[3],temp1[2]));
			arr[0] = add(var1,var2);
			
			//Calculate Probability of a
			arr[2] = add(mul(temp[2],temp1[2]),add(mul(temp[1],temp1[2]),mul(temp[2],temp1[1])));
			
			//Calculate Probability of A
			arr[3] = add(mul(temp[3],temp1[3]),add(mul(temp[1],temp1[3]),mul(temp[3],temp1[1])));
			
			mainStack.push(arr);
		}
		
		if(postfix[i]=='^'){
			vector<ll> temp = mainStack.top();
			mainStack.pop();
			vector<ll> temp1 = mainStack.top();
			mainStack.pop();
			vector<ll> arr(4,0);
			
			ll var1,var2;
			//Calculate Probability of 1
			var1 = add(mul(temp[0],temp1[1]),mul(temp[1],temp1[0]));
			var2 = add(mul(temp[2],temp1[3]),mul(temp[3],temp1[2]));		
			arr[1] = add(var1,var2);
			
			//Calculate Probability of 0
			var1 = add(mul(temp[0],temp1[0]),mul(temp[1],temp1[1]));
			var2 = add(mul(temp[2],temp1[2]),mul(temp[3],temp1[3]));
			arr[0] = add(var1,var2);
			
			//Calculate Probability of a
			var1 = add(mul(temp[0],temp1[2]),mul(temp[2],temp1[0]));
			var2 = add(mul(temp[1],temp1[3]),mul(temp[3],temp1[1]));
			arr[2] = add(var1,var2);
			
			//Calculate Probability of A
			var1 = add(mul(temp[0],temp1[3]),mul(temp[3],temp1[0]));
			var2 = add(mul(temp[1],temp1[2]),mul(temp[2],temp1[1]));
			arr[3] = add(var1,var2);
			
			mainStack.push(arr);
		}
		
		
	}
	vector <ll> prob = mainStack.top();
	vector<ll> ans;
	for(auto i: prob) {
		ll temp = mul(i,q);
		ans.pb(temp);
	}
	
	for(auto i: ans)cout<<i<<" ";
	cout<<endl;
	return;
	
	
}
int main(){	
	whilet(){
		solve();			
	}	
	
}


