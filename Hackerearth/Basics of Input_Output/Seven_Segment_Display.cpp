
#include <bits/stdc++.h>

using namespace std;
long findMatch(long x){
    if(x==1)
        return 2;
    else if(x==2||x==3||x==5)
        return 5;
    else if(x==4)
        return 4;
    else if(x==6 ||x==9 || x==0)
        return 6;
    else if(x==7)
        return 3;
    else if(x==8)
        return 7;
}
int main() {
    long t;
    cin >> t;
    while(t--){
        long match=0,i;
        string x;
        cin >> x;
        for(i=0;i<x.size();i++){
            match+=findMatch(x[i]-48);
        }
         //Debug:- cout<<match<<endl;
        if(match%2==0){
            for(i=0;i<match/2;i++)  cout<<"1";
        }else{
            cout<<"7";
            for(i=0;i<match/2-1;i++)cout<<"1";
        }
        cout<<endl;
    }
}

