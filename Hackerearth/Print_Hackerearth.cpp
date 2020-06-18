

#include <bits/stdc++.h>

using namespace std;

long findMin(long arr[],long n){
    long i;
    long m=arr[0];
    for(i=1;i<n;i++){
        if(m>arr[i])
            m=arr[i];
    }
    return m;
}
int main() {
	long n,i;
	long* arr2=(long*)calloc(4,sizeof(long));
	long* arr1=(long*)calloc(3,sizeof(long));
	cin >> n;
	for(i=0;i<n;i++){
        char x;
        cin >> x;
        if(x=='h')
            arr2[0]++;
        else if(x=='a')
            arr2[1]++;
        else if(x=='c')
            arr1[0]++;
        else if(x=='k')
            arr1[1]++;
        else if(x=='e')
            arr2[2]++;
        else if(x=='r')
            arr2[3]++;
        else if(x=='t')
            arr1[2]++;
	   
	}
	/*Debug:-
	for(i=0;i<4;i++){
	    cout<<arr2[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<3;i++){
	    cout<<arr1[i]<<" ";
	}
	*/
	cout<<endl;
	long min2=findMin(arr2,4);
	long min1=findMin(arr1,3);
	if(min2>=2*min1)
	    cout<<min1<<endl;
	else if(min2<2*min1)
	    cout<<min2/2<<endl;
}

