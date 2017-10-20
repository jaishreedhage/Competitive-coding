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
	    vector<char>v;
	    int hash[26] = {0};
	    while(n>0){
	        char c;
	        cin>>c;
	        hash[c-97]++;
	        v.push_back(c);
            while(v.size()>0 && hash[v.front()-97]>1)
                v.erase(v.begin());
            if(v.size()<=0)
                cout<<-1<<" ";
            else
                cout<<v.front()<<" ";
	        n--;
	    }
	    cout<<endl;
	    Q--;
	}
	return 0;
}
//initially i was just using a queue(vector)
//later realised that a hash
