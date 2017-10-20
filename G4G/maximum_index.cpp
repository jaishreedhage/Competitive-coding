#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n;
	    cin>>n;
	    vector<int> A(n);
	    for(int i=0;i<n;i++)
	        cin>>A[i];
	    int ans,max = -1;
        for(int i=0;i<n;i++){
            int j = n-1;
            while(j>i){
                if(A[j]>=A[i])
                    break;
                else if((j-i)<max)
                    break;
                j--;
            }
            ans = j-i;
            if(ans>max)
                max = ans;
        }
        cout<<max<<endl;
	    Q--;
	}
	return 0;
}
//Ok see this qsn i got correct in G4G, but for the same logic in Interview Bit I got TLE.
