#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
    long z,ans=0;
    long size=A.size();
    for(z=size-1;z>=size/2;z--){
        //Debug:- cout<<A[z]%10<<" "<<z<<endl;
        if(z&1!=0)
           ans+=A[z]%10;
        else
            ans-=A[z]%10;
    }
    for(z=size/2-1;z>=0;z--){
        while(A[z]>=10){
            A[z]/=10;
        }
        //Debug:- cout<<A[z]<<" "<<z<<endl;
        if(z&1!=0)
           ans+=A[z];
        else
            ans-=A[z];
    }
    if(abs(ans)%11==0)
        return "OUI";
    else
        return "NON";
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}