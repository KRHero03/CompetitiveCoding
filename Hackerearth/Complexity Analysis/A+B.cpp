#include <bits/stdc++.h>

using namespace std;
int customAtoi(char x){
    if(x=='0')
        return 0;
    else if(x=='1')
        return 1;
    else if(x=='2')
        return 2;
    else if(x=='3')
        return 3;
    else if(x=='4')
        return 4;
    else if(x=='5')
        return 5;
    else if(x=='6')
        return 6;
    else if(x=='7')
        return 7;
    else if(x=='8')
        return 8;
    else
        return 9;
        
}
void sum(string x,string y){
    if(x.size()==0 || y.size()==0)
        return;
    
    vector <int> ans;
    long p=x.size(),q=y.size();
    long carry=0,i;
    for(i=0;i<min(p,q);i++){
        long int1=customAtoi(x[p-i-1]);
        long int2=customAtoi(y[q-i-1]);
        //Debug:- cout<<int1<<" "<<int2<<" ints"<<endl;
        long sum=int1+int2+carry;
        ans.push_back(sum%10);
        carry=sum/10;
        //Debug:- cout<<sum%10<<" "<<sum/10<<endl;
    }
    //Debug:- cout<<i<<" "<<p<<" "<<q<<endl;
    if(i==p){
        for(i=p;i<q;i++){
            long sum=customAtoi(y[q-i-1])+carry;
            ans.push_back(sum%10);
            carry=sum/10;
        }
        
    }
    if(i==q){
        
        for(i=q;i<p;i++){
            long sum=customAtoi(x[p-i-1])+carry;
            ans.push_back(sum%10);
            carry=sum/10;
        }
        
    }
    for(i=ans.size()-1;i>=0;i--)
        cout<<ans[i];
    cout<<endl;
}
int main(){
    long p=12;
    while(p--){
        string x,y;
        cin >> x >> y;
        sum(x,y);
    }
}