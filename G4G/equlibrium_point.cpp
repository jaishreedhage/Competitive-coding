#include<iostream>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    if(n==1)
	        cout<<1<<endl;
	    else{
	        int totsum = 0,ls=0,rs=0,flag=0;
	        for(int i=0;i<n;i++)
	            totsum+=arr[i];
	        rs = totsum;
	        for(int i=0;i<n;i++){
	            rs -= arr[i];
	            if(ls==rs){
	                cout<<i+1<<endl;
	                flag=1;
	                break;
	            }
	            ls += arr[i];
	        }
	        if(flag==0)
	            cout<<-1<<endl;
	    }
	    Q--;
	}
	return 0;
}

//simple qsn
