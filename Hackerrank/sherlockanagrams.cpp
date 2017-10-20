#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isana(string s,string b){
	int ar1[26],ar2[26];
	for(int i=0;i<26;i++){
		ar1[i]=0;
		ar2[i]=0;
	}
	for(int i=0;i<s.length();i++){
		ar1[(int)s[i]-97]++;
	}
	for(int i=0;i<b.length();i++){
		ar2[(int)b[i]-97]++;
	}
	for(int i=0;i<26;i++)
		if(ar1[i]!=ar2[i])
			return 0;
	return 1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q,count;
    string s;
    cin>>Q;
    while(Q>0){
    	cin>>s;
    	count=0;
    	for(int i=1;i<=s.length();i++){
    		for(int j=0;j<=s.length()-i;j++){
    			for(int k=j+1;k<=s.length()-i;k++){
    				
    				if(isana(s.substr(j,i),s.substr(k,i))){
    					count++;
    					// cout<<s.substr(j,i)<<"  "<<s.substr(k,i)<<endl;
    				}
    			}
    		}
    	}
    	cout<<count<<endl;
    	Q--;
    }
    return 0;
}
