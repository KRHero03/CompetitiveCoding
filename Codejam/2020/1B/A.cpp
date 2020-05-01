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

class point{
	public:
		int x;
	    int y;
	    int step;
	    string path;
};

string bfs(int x, int y) {
    point a = {0, 0, 1, ""};
    queue <point> q;
    q.push(a);
    while(!q.empty()) {
        auto p = q.front();
        q.pop();
        if(abs(p.x) > abs(x) || abs(p.y) > abs(y)) {
            continue;
        }
        if(p.x == x && p.y == y){
            return p.path;
        }
        if(p.x != x) {
            q.push({p.x + p.step, p.y, p.step * 2, p.path + "E"});
            q.push({p.x - p.step, p.y, p.step * 2, p.path + "W"});
        }
        if(p.y != y) {
            q.push({p.x, p.y + p.step, p.step * 2, p.path + "N"});
            q.push({p.x, p.y - p.step, p.step * 2, p.path + "S"});
        } 
    }
    return "IMPOSSIBLE";
}

void solve(){
	ll x,y;
	cin >> x >> y;
	if((x+y)%2==0){
		cout<<"IMPOSSIBLE"<<endl;
		return;
	}
	ll flagX=0,flagY=0;
	if(x<0) flagX=1;
	if(y<0) flagY=1;
	vector<ll> bin;
	string ans="";
	ll temp=log2(abs(x)+abs(y))+1;
	ll temp2=(1<<(temp))-1;
	ll temp3=(temp2-abs(x)-abs(y))/2;
	for(int i=0;i<temp;++i)
		if(temp3&(1<<i))
			bin.pb(-(1<<i));
		else
			bin.pb(1<<i);
	reverse(bin.begin(),bin.end());
	x=abs(x); y=abs(y);
	for(auto i:bin){
		if(abs(x)>abs(y)){
			x-=i;
			if((i<0)&&(flagX)){
				ans+='E';
			} else if((i<0)||(flagX)){
				ans+='W';
			} else {
				ans+='E';
			}
		} else {
			y-=i;
			if((i<0)&&(flagY)){
				ans+='N';
			} else if((i<0)||(flagY)){
				ans+='S';
			} else {
				ans+='N';
			}
		}
	}
	reverse(ans.begin(),ans.end());
	for(auto i:ans) cout<<i;
	cout<<endl;
	return;
	
}
int main(){
	ll t;
	cin >> t;
	ll q=1;
	while(q<=t){
		cout<<"Case #"<<q<<": ";
		solve();
		q++;			
	}	
	
}


