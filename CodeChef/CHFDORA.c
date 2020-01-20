/*
	author: KRHero
	IDE: DevCPP		
*/

#include <stdio.h>

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i,a,b) for(i=a;i<b;i++)
#define fe(i,a,b) for(i=a;i<=b;i++)
#define fd(i,a,b) for(i=b;i>a;i--)
#define fde(i,a,b) int i;for(i=b;i>=a;i--)
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

void solve(){
	ll n,m;
	int x;
	scanf("%ld %ld",&n,&m);
	int arr[n][m];
	int i,j;
	f(i,0,n){
		f(j,0,m){
			scanf("%d",&x);
			arr[i][j]=(x);
		}
	}
	ll ans=0,p,len,temp;
	f(i,0,n){
		f(j,0,m){
			p = 1;
			len=1;
			while(i-p>=0 && i+p<n){
				if(arr[i-p][j]==arr[i+p][j]){
					len+=2;
				}else{
					break;
				}
				p++;
			}
			temp=len;
			len=1;
			p=1;
			while(j-p>=0 && j+p<m){
				if(arr[i][j-p]==arr[i][j+p]){
					len+=2;
				}else{
					break;
				}
				p++;
			}
			temp = len>temp?temp:len;
			ans+= (temp+1)/2;			
		}
	}
	printf("%ld \n",ans);

	
	
	
	
}
int main(){
	whilet(){
		solve();		
	}
}
