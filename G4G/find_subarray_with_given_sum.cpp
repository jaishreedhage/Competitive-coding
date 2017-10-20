#include<iostream>
#include<map>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,s;
	    cin>>n>>s;
	    int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	    map<int,int> mp;
	    int sum = 0,flag=0;
	    for(int i=0;i<n;i++){
	        sum += ar[i];
	        if(sum==0){
	            cout<<"Found from 0 to "<<i<<endl;
	            flag=1;
	            break;
	        }
            if(mp.find(sum-s)!=mp.end()){
                cout<<"Found from "<<mp[sum.s]+1<<" to "<<i<<endl;
                flag=1;
                break;
            }
	        mp[sum]=i;
	    }
	    if(flag==0)
	        cout<<"No"<<endl;
	    Q--;
	}
	return 0;
}
//this qsn has 2 parts; one for just +ve numbers which is easy and doesnt need hashing
//other part has -ve numbers too for which you need to use hashing -> only method apparently
