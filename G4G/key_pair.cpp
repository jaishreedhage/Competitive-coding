#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,x;
	    cin>>n;
	    cin>>x;
	    int ar[n];
	    for (int i=0;i<n;i++)
	        cin>>ar[i];

	    sort(ar,ar+n);
	    int flag=0;
	    int i=0,j=n-1;
	    for(;i<n;i++){
	        for(;j>i;j--){
	            if(ar[i]+ar[j]==x){
	                cout<<"Yes"<<endl;
	                flag=1;
	                break;

	            }
	            else if(ar[i]+ar[j]<x)
	                break;
	        }
	        if(flag==1)
	            break;
	    }
	    if(flag==0)
	        cout<<"No"<<endl;
	    Q--;
	}
	return 0;
}
