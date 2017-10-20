#include<iostream>
using namespace std;

int find(int i,int j){
    int sum = (j-i)*(j-i+1)/2;
    return sum;
}

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
        int tots = 0;
        for(int i=0;i<n;i++){
            int k=i,j=i+1;
            while(k<n && j<n && ar[k]<ar[j]){
                k++;
                j++;
            }
            j--;
            tots += find(i+1,j+1);
            i = j;
        }
        cout<<tots<<endl;
	    Q--;
	}
	return 0;
}
//easy -> like small version of kadane
