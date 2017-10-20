#include <iostream>
using namespace std;

int main() {
	//code
	int Q;
	cin>>Q;
	int n1,n2,n3;
	while(Q>0){
	    cin>>n1>>n2>>n3;
	    int ar1[n1],ar2[n2],ar3[n3];
	    for(int i=0;i<n1;i++)
	        cin>>ar1[i];
	    for(int i=0;i<n2;i++)
	        cin>>ar2[i];
	    for(int i=0;i<n3;i++)
	        cin>>ar3[i];
	    int i=0,j=0,k=0,flag=0;
	    while(i<n1 && j<n2 && k<n3){
	        if(ar1[i]==ar2[j] && ar1[i]==ar3[k]){
	            flag=1;
	            i++; j++; k++;
	        }
	        if(ar1[i]<ar2[j])
	            while(ar1[i]<ar2[j]) i++;
	        if(ar2[j]<ar1[i])
	            while(ar2[j]<ar1[i]) j++;
	        if(ar3[k]<ar1[i])
	            while(ar3[k]<ar1[i]) k++;
	    }
	    if(flag==0)
	        cout<<-1;
	    cout<<endl;
	    Q--;
	}
	return 0;
}