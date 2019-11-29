#include <bits/stdc++.h>
 
using namespace std;

long binarySearch(long long arr[],long low,long high,long long x){
	while(low <= high){
		long mid = low + (high-low)/2;
		if(arr[mid] < x){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}	
	return high;
}

int main(){
    long n,m,k;
    cin >> n >> m >> k;
    long long arr[n][2],prefix[n],prefixSum[n+1];
    long i=0,wt=0,wh=0;
    long finalCountH=0,finalCountT=0,count=0,sum=0,finalSum=0,j=0,p=0,tempCount=0,tempSum=0,tempADDWH=0,tempADDWT=0;
    long tempWH=wh,tempWT=wt;
    
    prefix[i]=0;
    prefixSum[i]=0;
    for(i=0;i<n;i++){
        cin >> arr[i][0]>>arr[i][1];
        if(i>=n-m){
            wh+=arr[i][0];            
        }else{
            wt+=arr[i][0];
        }
    	prefix[i+1]=prefix[i]+(arr[i][0]*k);     
		prefixSum[i+1]=prefixSum[i]+arr[i][1];   	
		
    }    
    tempWT=wt,tempWH=wh;
    long long x=k*tempWT-tempWH;
	p=binarySearch(prefix,0,n-m,x);	
	sum=prefixSum[p];
	if(sum>finalSum){
		finalSum=sum;
		finalCountT=p;
	}
	
    for(j=0;j<n-1-m;j++){
    	count=0;
    	sum=0; 
		p=0; 
		tempWT=wt,tempWH=wh;	
		tempCount++;
		tempSum+=arr[n-1-j][1];
		tempADDWH+=arr[n-1-m-j][0]-arr[n-1-j][0];
		tempADDWT-=arr[n-1-m-j][0];	
		
		if(tempWH+tempADDWH<k*(tempWT+tempADDWT)){
			tempWH+=tempADDWH;
			tempWT+=tempADDWT;
		}else{
			break;
		}   
    	long long x=(k*tempWT)-tempWH;
    	p=binarySearch(prefix,0,n-m,x);	
		sum=prefixSum[p];
		if(sum+tempSum>finalSum){
			finalSum=sum+tempSum;
			finalCountT=p;
			finalCountH=tempCount;
		}
	
		
	}
    cout<<finalCountH+finalCountT<<" "<<finalSum<<endl;
    for(i=0;i<finalCountH;i++)
    	cout<<'H';
	for(i=0;i<finalCountT;i++)
		cout<<'T';
	cout<<endl;
    
}
