#include <iostream>
using namespace std;

void solve();

int main() {
	
	int n,p1,p2,winner,sum1=0,sum2=0,difference=0;
	cin>>n;
	
	int a[n];
	int b[n];
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	    sum1 = sum1+a[i];
	    
	    cin>>b[i];
	    sum2 = sum2+b[i];
	    
	    if(sum1>sum2 && difference<(sum1-sum2)){
	        winner=1;
	        difference=sum1-sum2;
	    }
	    else if(sum2>sum1 && difference<(sum1-sum2)){
	        winner = 2;
	        difference=sum2-sum1;
	    }
	}
	
    cout << winner << " " << difference << endl;
	return 0;
}
