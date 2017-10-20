#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    int n,val;
	    cin>>n;
	    vector<int> v1(n),v2(n);
	    for(int i=0;i<n;i++){
	        cin>>val;
	        v1[i]=val;
	    }
	    v2[n-1] = -1;
	    stack<int> s;
	    s.push(v1[n-1]);
	    for(int i=v1.size()-2;i>=0;i--){
	        if(v1[i]<=s.top())
	            v2[i] = s.top();
	        else{
	            while(!s.empty() && v1[i]>s.top())
	                s.pop();
	            if(s.empty())
	                v2[i] = -1;
	            else
	                v2[i] = s.top();
	        }
	        s.push(v1[i]);
	    }
	    for(int i=0;i<n;i++)
	        cout<<v2[i]<<" ";
	    cout<<endl;
	    Q--;
	}
	return 0;
}
//similar to the qsn I did in IB - nearest smaller element
