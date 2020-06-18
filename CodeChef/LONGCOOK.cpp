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
ll dayofweek(ll d, ll m, ll y)  
{  
    static ll t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
} 

ll isLeapYear(int i){
    return (i%400==0 || (i%100!=0 && i%4==0));
}

void solve(){
	ll m1,m2,start_year,end_year;
	cin >> m1 >> start_year >> m2 >> end_year;	
	ll count = dayofweek(1,2,start_year);
	ll factor = 0;
	f(i,start_year,start_year+400){
		if(count%7==6 || (count%7==0 && !isLeapYear(i))) factor++;		
		count++;		
		if(isLeapYear(i)) count++;		
	}
	ll ans = ((end_year - start_year + 1)/400)*factor;
	ll diff = (end_year - start_year) %400;
	if(diff!=399){		
		count = dayofweek(1,2,start_year);
		fe(i,start_year,start_year + diff){
			if(count%7==6 || (count%7==0 && !isLeapYear(i))) {
				ans++;		
			}
			count++;		
			if(isLeapYear(i)) count++;		
		}
	}
	
	if(m1>2){
		int count = dayofweek(1,2,start_year);
		if(count%7==6 || (count%7==0 && !(isLeapYear(start_year)))) ans--;	
	}
	if(m2<2){
		int count = dayofweek(1,2,end_year);
		if(count%7==6 || (count%7==0 && !(isLeapYear(end_year)))) ans--;
	}
	cout<<ans<<endl;
	return;
}

void debugSolve(){
	ll m1,m2,y1,y2;
	cin >> m1 >> y1 >> m2 >> y2;
	ll start_year = m1<=2?y1:y1+1;
	ll end_year = m2>=2?y2:y2-1;
	ll ans = 0;	
	fe(i,start_year,end_year){
		if(dayofweek(1,2,i)==6) ans++;
		if(dayofweek(1,2,i)==0 && !(isLeapYear(i))) ans++;
	}
	cout<<ans<<endl;
	return;
}
int main(){
	whilet(){
		solve();		
	}		

	
}


