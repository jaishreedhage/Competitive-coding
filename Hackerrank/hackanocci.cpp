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

int n;
char ar[2001][2001];

// int hacknanoi(long long val){
// 	if(val== 1 || val==2 || val ==3) 
// 		return val;
// 	long long unsigned int ans = hacknanoi(val - 1) + hacknanoi(val - 2) + hacknanoi(val - 3);  
// 	if(ans%2==0)
// 		return 0;
// 	else
// 		return 1;
// }

void rotate(){
	char ar2[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ar2[j][n+1-i] = ar[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ar[i][j] = ar2[i][j];
		}
	}
}

int main(){
    
    int q,t,val;
    cin >> n >> q;
    char ar2[n+1][n+1];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		val = i*i*j*j;
    		val =val%7;
    		if(val==1 || val==3 || val==6 || val==0 )
    			ar[i][j] = 'Y';
    		else
    			ar[i][j] = 'X';	
    		ar[j][i] = ar[i][j];
    	}
    }
    // for(int i=1;i<=n;i++){
    // 	for(int j=1;j<=n;j++){
    // 		cout<<ar[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		ar2[i][j]=ar[i][j];
    	}
    }
    for(int a0 = 0; a0 < q; a0++){
        int angle,tots=0;
        cin >> angle;
        angle = angle%360;
        if(angle==0)
        	cout<<0<<endl;
        else{
        	rotate();
	        
	        if(angle==90){
	        	//do nothing
	        }
	        else if(angle>=180)
	        	rotate();
	        if(angle==270)
	        	rotate();
	     //    cout<<"WTF"<<" ";
		    // for(int i=1;i<=n;i++){
		    // 	for(int j=1;j<=n;j++){
		    // 		cout<<ar[i][j]<<" ";
		    // 	}
		    // 	cout<<endl;
		    // }
		    
	        for(int i=1;i<=n;i++){
	    		for(int j=1;j<=n;j++){
	    			if(ar[i][j]!=ar2[i][j])
	    				tots++;
	    		}
	    	}
	    	cout<<tots<<endl;
	    	for(int i=1;i<=n;i++){
		    	for(int j=1;j<=n;j++){
		    		ar[i][j]=ar2[i][j];
		    	}
		    }
		}
    }
    return 0;
}
