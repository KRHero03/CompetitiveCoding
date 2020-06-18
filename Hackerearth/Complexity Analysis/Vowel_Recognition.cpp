

#include <bits/stdc++.h>

using namespace std;

long getVowelCount(string x){
    long size=x.size();
    vector <long> occ;
    long i,sum=0;
    for(i=0;i<size;i++){
        if(i==0)
            occ.push_back(size);
        else
            occ.push_back(size-i +occ[i-1]-i);
    }
    
    for(i=0;i<size;i++){
        if(x[i]=='a'||x[i]=='e'|| x[i]=='i' || x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'|| x[i]=='I' || x[i]=='O'||x[i]=='U')
            sum+=occ[i];
        
    }
    return sum;
}

int main() {
	long t;
	cin >> t;
	while(t--){
	    string x;
	    cin >> x;
	    cout<<getVowelCount(x)<<endl;
	}
}
