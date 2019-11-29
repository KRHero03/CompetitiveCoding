

#include <iostream>

using namespace std;

int main() {
	long n;
	cin >> n;
	long ans1=0,ans2=0,ans3=0,i=0;
	for(i=1;i<=n;i++){
	    long x;
	    cin >> x;
	    if(i%3==0)
	        ans3+=x;
	    else if(i%3==1)
	        ans1+=x;
	    else
	        ans2+=x;
	}
	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}

