

#include <bits/stdc++.h>

using namespace std;

void printPrime(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    long i=2;
    for(i=2;i*i<=n;i++){
        if(prime[i]){
            
            long j=i;
            for(j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    for(i=2;i<=n;i++){
        if(prime[i])
            cout<<i<<" ";
    }
    
}

int main() {
	long n;
	cin>> n;
	printPrime(n);
}