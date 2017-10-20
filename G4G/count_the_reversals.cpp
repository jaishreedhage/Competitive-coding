Practice    BETA
GeeksforGeeks GATE CS Placements Videos Contribute
Hello jaishree96
School
Basic
Easy
Medium
Hard
What's New?
Subjective
Featured
Contribute a Problem
Help
Home Easy  Count the Reversals	View Solution
 Company Tags
Amazon
Microsoft
Oracle
Samsung
Adobe
Synopsys
Infosys
Wipro
Cisco
Morgan-Stanley
show more
 Topic Tags
Maths
Array
Dynamic-Programming
Greedy-Algorithm
Hashing
Tree
Bit
Matrix
Backtracking
Operating System
show more
#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	//code
	int Q;
	cin>>Q;
	while(Q>0){
	    string s;
	    cin>>s;
	    stack<char>st;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='{')
	            st.push(s[i]);
            else if(st.size()>0 && st.top()=='{')
                st.pop();
            else
                st.push(s[i]);
	    }
	    int open=0,close=0;
	    while(!st.empty()){
	        if(st.top()=='{')
	            open++;
	       else
	            close++;
            st.pop();
	    }
	    if((open+close)%2!=0)
	        cout<<-1<<endl;
	    else{
	        int ans = (open/2) + (close/2) + (open%2) + (close%2);
	        cout<<ans<<endl;
	    }
	    Q--;
	}
	return 0;
}

//very easy qsn 
