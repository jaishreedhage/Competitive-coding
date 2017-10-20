#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    string s;
	    cin>>s;
	    vector<int>st;
	    for(int i=0;i<=s.length();i++){
	        st.push_back(i+1);
	        if(i==s.length() || s[i]=='I'){
	            while(st.size()>0){
	                cout<<st.back();
	                st.pop_back();
	            }
	        }
	    }
	    cout<<endl;
	    Q--;
	}
	return 0;
}
