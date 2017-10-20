#include<iostream>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,k;
	    cin>>n>>k;
	    int ar[n],flag=0;
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	    int l=0,r=0,sum=0;
	    for(int i=0;i<n;i++){
	        sum += ar[i];
	        r = i;
	       if(sum>k){
	            while(sum>k){
	                sum -= ar[l];
	                l++;
	            }
	        }
	        if(sum==k){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<l+1<<" "<<r+1<<endl;
	    else
	        cout<<-1<<endl;
	    Q--;
	}
	return 0;
}

//like kadane but much simpler
