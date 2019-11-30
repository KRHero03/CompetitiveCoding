#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long t;
	cin >>t;
	while(t--){
		long n;
		cin>>n;
		long arr[n],m[n];
		long i=0,ans=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}	
		for(i=n-1;i>=0;i--){
			if(i==n-1){
				m[i]=arr[i];
			}else{
				m[i]=min(m[i+1],arr[i]);
			}
		}		
		for(i=0;i<n-1;i++){
			if(arr[i]>m[i+1]){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
