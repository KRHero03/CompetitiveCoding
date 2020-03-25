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

void solve1(){
	ll n,k,temp;
	cin >> n;
	vector <ll> arr(n+1,0);
	f(i,0,n){
		cin >> k;
		ll tp = 0;
		f(j,0,k){
			cin >> temp;
			temp++;
			if(arr[temp]==0 && tp==0){
				tp++;
				arr[temp] = 1;
			}
		}
		if(tp==0){
			fe(j,1,n){
				if(arr[j]==0){
					cout<<"IMPROVE"<<endl<<i+1<<" "<<j+1<<endl;
					return;
				}
			}
		}
	}
	cout<<"OPTIMAL"<<endl;
	return;
	
	
}

void solve(){
	ll n;
	cin >> n;
	vector<bool> arr(n+1,false);
    vector<bool> arr2(n+1,false);
    fe(i,1,n){
        int k;
        cin>>k;
        fe(j,1,k){
            int s;
            cin>>s;
            if(arr[s]==false&&arr2[i]==false){
                arr[s] = true;
                arr2[i]=true; 
            } 
        }
    }
    fe(i,1,n){
    	if(arr2[i]==false){
    		fe(j,1,n){
    			if(arr[j]==false){
    				cout<<"IMPROVE"<<endl<<i<<" "<<j<<endl;
    				return;
    			}
    		}
    	}
    }
    cout<<"OPTIMAL"<<endl;
}
int main(){
	
	whilet(){
		solve();			
	}	
	
}


