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
const char DUMMY = '.';
 
string find(string s) {
    string s1;
    s1="";
    
	int n = s.size()*2-1;
	int k=s.size()-1;
    if(n==-1){
    	return "";
	}
	vector <ll> timepass(n,0);
	string a = string(n, DUMMY);
	
	for(int i=0;i<n;i+=2) a[i]=s[i / 2];
	int kk1=a.size()-1;
	int l=0,r=-1,center,res=0;
	for(int i=0,j=0;i<n;i++){
		j=(i>r ?0 :MIN(timepass[l+r-i],r-i))+1;
		while(i-j>=0 && i+j<n && a[i-j]==a[i+j]) j++;
		timepass[i] = --j;
		if (i+j>r) {
			r=i+j;
			l=i-j;
		} 
		int len=(timepass[i]+i%2)/2*2+1-i%2;
		if((len > res)){
            if ((center/2-(len/2)<=0) ||
                (center/2+(len/2)>=k)){
            res = len;
			center = i;
            }
		}
	}
	s1="";
	int i = center;
	int j = center;
	while(i>=0 && j<=kk1){
        if (a[i]!=a[j]) break;
        if (i==j && a[i]!='.') s1+=a[i]; else {
            if (a[i]!='.') s1 = a[i] + s1 + a[j];
        }
        i--;
        j++;
        if (i<0 || j>kk1) break;
	}
	return s1;
}
void solve1()
{
    string s,a="",b="";
    cin >> s;
    string s1="";
    int i = 0;
    int j = s.size()-1;
    while(j>i){
        if (s[i]==s[j]){
	        a=a+s[i];
	        b=s[j]+b;
	        i++;
	        j--;
        }else break;
    }
    fe(k,i,j) s1+=s[k];
    cout << a+find(s1)+b << endl;
    
}


bool isPalindrome(string s){
	ll size = s.size();
	ll i = 0;
	while(i<size-i-1){
		if(s[i]!=s[size-i-1]) return 0;
		i++;
	}
	return 1;
}
void solve(){
	string s;
    cin >> s;
    string s1="";
    ll size1 = s.size();
    int l = 0;
    int r = s.size()-1;
    string res="";
	if(isPalindrome(s))
	{
		cout<<s<<"\n";
		return;
	}
    while(r>l){
        if (s[l]==s[r]){
	        l++;
	        r--;
        }else{
			int max_lengthl=1,max_lengthr=1;
			string strl,strr;
			strl=s[l];
			strr=s[r];
			for(int k=1;k<r-l;k++)
			{
				strl=s.substr(l,k+1);
				if(isPalindrome(strl))
				{
					max_lengthl=strl.size();
				}
			}

			for(int k=r-1;k>=l;k--)
			{
				strr=s.substr(k,r-k+1);
				if(isPalindrome(strr))
					max_lengthr=strr.size();
			}

			if(max_lengthl<max_lengthr)
			{
				string a=s.substr(0,l);
				string b=s.substr(r+1-max_lengthr,s.size()-r-1+max_lengthr);
				a.append(b);
				res=a;
				break;
			}
			else{
				string a=s.substr(0,l+max_lengthl);
				string b=s.substr(r+1,s.size()-r-1);
				a.append(b);
				res=a;
				break;
			}
		}
    }
    
	cout<<res<<endl;
   
}
int main(){	
	whilet(){
		solve();			
	}		
}


