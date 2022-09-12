#include <iostream>
using namespace std;

int main() {

	int n,i,z,sum1=0,sum2=0,diff=0;
	cin>>n;
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    sum1=sum1+a[i];
	    
	    cin>>b[i];
	    sum2=sum2+b[i];
	
	   
	 if(sum1>sum2 && diff<(sum1-sum2))
	    {
	        z=1;
	        diff=(sum1-sum2);
	    }
	    else if(sum1<sum2 && diff<(sum2-sum1))
	    {
	        z=2;
	        diff=(sum2-sum1);
	    }
	}
	 
	cout<<z<<" "<<diff<<endl;
	return 0;
}
