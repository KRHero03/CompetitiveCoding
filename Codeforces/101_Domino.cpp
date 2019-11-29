#include <bits/stdc++.h>
using namespace std;

int main(){
	long n;
	int* count=(int*)calloc(6,sizeof(int));
	long i;
	for(i=0;i<n;i++){
		int x,y;
		cin >> x >> y;
		count[x]++;
		count[y]++;
	}
	int pass=0;
	for(i=0;i<6;i++){
		if(count[i]&1!=0)
			pass++;
	}
}
