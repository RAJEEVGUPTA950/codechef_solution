#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float k,l;
	    k=a/x;
	    l=b/y;
	    if(k<l)
	    cout<<"CHEF"<<endl;
	    else if(k>l)
	    cout<<"CHEFINA"<<endl;
	    else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
