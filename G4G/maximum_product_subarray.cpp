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
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int max_val = ar[0];
        for(int i=1,imax = max_val,imin=max_val;i<n;i++){
            if(ar[i]<0){
                int temp = imax;
                imax = imin;
                imin = temp;
            }
            imax = max(ar[i],imax*ar[i]);
            imin = min(ar[i],imin*ar[i]);
            if(max_val<imax)
                max_val = imax;
        }
        cout<<max_val<<endl;
	    Q--;
	}
	return 0;
}
//Very IMP QSN
