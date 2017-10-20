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
    int Q,s;
    long l,r;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
    	
    	s=0;
    
        cin >> l >>r;
        for(long i=1;i<=l;i++)
        	s=s^i;
        if((r-l+1)%2==0){
        	s=0;
        	for(long i = l+1;i <= r; i=i+2)
        		s=s^i;
        }
        else{
        	for(long i = l+2;i <= r; i=i+2)
        		s=s^i;
        }	
        cout<<s<<endl;
    }
    return 0;
}
