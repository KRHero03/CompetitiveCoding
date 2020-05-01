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
	ll n,maxI=-INT_MAX,minI=1,temp;
	cin >> n;
	unordered_map<ll,ll> umap,umap2;
	vector<ll> arr(n),left(n,0),right(n,0);
	f(i,0,n){
		cin >> temp;		
		arr[i]=temp;
	}
	f(i,0,n){
		maxI = max(maxI,arr[i]);
		if(umap.find(arr[i])==umap.end()){
			umap[arr[i]] = 1;
			if(!(maxI-minI+1 - umap.size())){
				left[i] = umap.size();
			}
		}else{
			break;
		}
	}
    minI = 1,maxI = -INT_MAX;
	for(int i = n-1;i>=0;i--){
		maxI = max(maxI,arr[i]);
		if(umap2.find(arr[i])==umap2.end()){
			umap2[arr[i]]=1;
			if(!(maxI-minI+1-umap2.size())){
				right[i]=umap2.size();
			}
		}else{
			break;
		}
	}   
    ll count = 0;
	f(i,0,n){
		if(left[i]!=0 && right[i+1]!=0){
			count++;
		}
	}  
        
        cout<<count<<endl;
        if(!count)
             return;
        f(i,0,n-1)
        {
            if((left[i]!=0)&&(right[i+1]!=0))
            {
               cout<<left[i]<<" "<<right[i+1]<<endl;
            }
        }
}

int main(){
	
	whilet(){
		solve();			
	}	
	
}


