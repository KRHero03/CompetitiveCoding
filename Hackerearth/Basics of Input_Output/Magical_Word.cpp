
#include <bits/stdc++.h>

using namespace std;
int getMagicalLetter(int x){
    if(x<=69)   
        return 67;
    else if(x>69 && x<=72)
        return 71;
    else if(x>72 && x<=76)
        return 73;
    else if(x>76&& x<=81)
        return 79;
    else if(x>81 && x<=86)
        return 83;
    else if(x>86 && x<=93)
        return 89;
    else if(x>93 && x<=99)
        return 97;
    else if(x>99 && x<=102)
        return 101;
    else if(x>102 && x<=105)
        return 103;
    else if(x>105 && x<=108)
        return 107;
    else if(x>108&&x<=111)
        return 109;
    else 
        return 113;
}
int main() {
	long t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string x;
	    cin >> x;
	    long i;
	    for(i=0;i<x.size();i++){
	        x[i]=(char)getMagicalLetter((int)x[i]);
	    }
	    cout<<x<<endl;
	}
}
