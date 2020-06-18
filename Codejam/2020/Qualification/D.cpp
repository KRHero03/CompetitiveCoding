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
ll t,b,flag=0;
void solve(){
	vector <ll> arr(b,2);
	ll num1,num2;
	ll m = b;
	ll tries = 150;
	ll found = 1;
	while(tries>0){
		if(tries%10==0 && tries!=150){
			ll temp = 0,temp1=0;
			ll foundEqual = 0,foundUnequal=0;
			f(i,0,found){
				if(arr[i]==arr[b-i-1]){
					foundEqual=1;
					temp1=i;
					break;
				}
			}
			f(i,0,found){
				if(arr[i]!=arr[b-i-1]){
					foundUnequal=1;
					temp=i;
					break;
				}
			}
			if(foundEqual==0 || foundUnequal==0){
				cout<<temp+1<<endl;
				cin >> num1;
				cout<<temp+1<<endl;
				cin >> num1;
				if(num1!=arr[temp]){
					f(i,0,found){
						arr[i] = 1 - arr[i];
						arr[b-i-1] = 1 - arr[b-i-1];
					}
				}
				tries-=2;
			}else{
				cout<<temp+1<<endl;
				cin >> num1;
				cout<<temp1+1<<endl;
				cin >> num2;
				tries-=2;
				if(num2==arr[temp1]){
					if(num1!=arr[temp]){
						f(i,0,found){
							ll t = arr[i];
							arr[i] = arr[b-i-1];
							arr[b-i-1] = t;
						}
					}
				}else{
					if(num1!=arr[temp]){
						f(i,0,found){
							arr[i] = 1 - arr[i];
							arr[b-i-1] = 1 - arr[b-i-1];
						}
					}else{
						f(i,0,found){
							arr[i] = 1 - arr[i];
							arr[b-i-1] = 1 - arr[b-i-1];
						}
						f(i,0,found){
							ll t = arr[i];
							arr[i] = arr[b-i-1];
							arr[b-i-1] = t;
						}
					}
				}
			}			
			//for(auto i : arr) cout<<i;
			//cout<<endl;
			continue;
		}	
		cout<<found<<endl;
		cin >> num1;
		cout<<b-found+1<<endl;
		cin >> num2;
		arr[found-1]=num1;
		arr[b-found]=num2;
		if(found>=ceil(b/2.0)){
			break;
		}
		found++;
		tries-=2;
		//for(auto i : arr) cout<<i;
		//cout<<endl;
	}
	for(auto i: arr) cout<<i;
	cout<<endl;
	char p;
	cin >> p;
	if(p=='N') flag=1;
	return;
	
}
int main(){
	cin >> t >> b;
	while(t--){
		if(flag==0) solve();
	}
		
	
}


