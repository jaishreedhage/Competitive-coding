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
	    map<int,int>mp;
	    int tots = 0;
	    for(int i=0;i<n;i++){
	        if(mp.find(s-ar[i])!=mp.end())
	            tots += mp[s-ar[i]];
	        mp[ar[i]]++;
	    }
	    cout<<tots<<endl;
	    Q--;
	}
	return 0;
}

//for checking if a pair exists, we normally use 2ptr technique; but if count number of pairs is given, then hashing is the soln
