
#include <bits/stdc++.h>

using namespace std;

void updateValUtility(long* st,long ss,long se,long pos,long dif,long si){
    if(pos<ss || pos>se)
        return;
    
    st[si]+=dif;
    if(se!=ss){
        long mid=ss+(se-ss)/2;
        updateValUtility(st,ss,mid,pos,dif,2*si+1);
        updateValUtility(st,mid+1,se,pos,dif,2*si+2);
    }
}

void updateVal(long* st,long arr[],long n,long pos,long val){
    long dif=val-arr[pos];
    arr[pos]=val;
    updateValUtility(st,0,n-1,pos,dif,0);
}

long getSum(long* st,long ss,long se,long qs,long qe,long si){
    if(qs<=ss && qe>=se)
        return st[si];
    if (se < qs || ss > qe)  
        return 0;  
    long mid=ss+(se-ss)/2;
    return getSum(st,ss,mid,qs,qe,2*si+1)+getSum(st,mid+1,se,qs,qe,2*si+2);
}

long constructSTUtility(long arr[],long ss,long se,long* st,long si){
    if(ss==se){
        st[si]=arr[ss];
        return st[si];
    }
    long mid=ss+(se-ss)/2;
    st[si]=constructSTUtility(arr,ss,mid,st,si*2+1)+constructSTUtility(arr,mid+1,se,st,si*2+2);
    return st[si];
}
long* constructST(long arr[],long n){
    long h=(long)ceil(log2(n));
    long size=(long)(2*pow(2,h)-1);
    long* st=(long*)calloc(size,sizeof(long));
    constructSTUtility(arr,0,n-1,st,0);
    return st;
}

int main() {
	long n,q;
	cin >> n >> q;
	long arr[n],i;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	long* st=constructST(arr,n);
	/*Debug:-
    for(i=0;i<15;i++){
        cout<<st[i]<<" ";
    }
    cout<<endl;*/
	while(q--){
	    int t;
	    cin >> t;
	    if(t==1){
	        long x,y;
	        cin >> x >> y;
	        updateVal(st,arr,n,x,y);
	        /*Debug:-
	        for(i=0;i<15;i++){
	            cout<<st[i]<<" ";
	        }
	        cout<<endl;*/
	    }else{
	        long l,r;
	        cin >> l >> r;
	        if(l>=n || r>=n || l<0 || r<0 || l>r)
	            cout<<-1<<endl;
	        else{
	            cout<<getSum(st,0,n-1,l,r,0)<<endl;
	        }
	    }
	}
}

