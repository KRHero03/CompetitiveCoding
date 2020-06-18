
#include <bits/stdc++.h>

using namespace std;

int main() {
    long t;
    cin >> t;
    while(t--){
        long* a=(long*)calloc(26,sizeof(long));
        long* b=(long*)calloc(26,sizeof(long));
        long i,ans=0;
        string aS,bS;
        cin >> aS >> bS;
        for(i=0;i<aS.size();i++){
            if(aS[i]>=97)
                aS[i]-=97;
            else if(aS[i]>=65)
                aS[i]-=65;
            a[aS[i]]++;
        }
        for(i=0;i<bS.size();i++){
            if(bS[i]>=97)
                bS[i]-=97;
            else if(bS[i]>=65)
                bS[i]-=65;
            b[bS[i]]++;
        }
        for(i=0;i<26;i++){
            //Debug:- cout<<a[i]<<" "<<b[i]<<endl;
            ans+=abs(a[i]-b[i]);
        }
        cout<<ans<<endl;
    }
}