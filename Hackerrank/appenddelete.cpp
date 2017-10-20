#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
// #include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k,val,i,flag=-1;
    cin >> k;
    if(s.compare(t)==0){
    	if(k%2==0 || k>=2*s.length())
    		cout<<"Yes"<<endl;
    	else
    		cout<<"No"<<endl;
    	return 0;
    }
    for(i=0;i<t.length();i++){
    	if(s[i]!=t[i]){
    		
    		val = s.substr(i).length() + t.substr(i).length() ;
    		if(i!=0){
	    		if(k==val )
	    			flag=1;
	    		else if(k>val){
	    			int p = k%2;
	    			int q = val%2;
	    			if(p==q)
	    				flag=1;
	    			else 
	    				flag=0;
	    		}
	    		else
	    			flag=0;
	    		break;
	    	}
	    	else{
	    		if(k>=val){
	    			flag=1;
	    		}
	    		else
	    			flag=0;
	    		break;
	    	}
    	}
    }
    if(flag==1)
    	cout<<"Yes"<<endl;
    else if(flag==0)
    	cout<<"No"<<endl;
    else{
    	if(i<=s.length()){
    		val = s.substr(i).length();
    		if(k==val)
				cout<<"Yes"<<endl;
			else if(k>val && (k%2==val%2))
				cout<<"Yes"<<endl;
			else if(k>=2*(s.substr(0).length()-val)+val)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
    	}
    	else
    		cout<<"No"<<endl;
    }
    return 0;
}
