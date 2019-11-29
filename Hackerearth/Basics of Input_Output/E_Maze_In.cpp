

#include <bits/stdc++.h>

using namespace std;

int main() {
    long x=0,y=0;
    string c;
    cin >> c;
    long i=0;
    for(i=0;i<c.size();i++){
        if(c[i]=='L')
            x--;
        else if(c[i]=='R')
            x++;
        else if(c[i]=='U')
            y++;
        else
            y--;
    }
    cout<<x<<" "<<y<<endl;
    
}