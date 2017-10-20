#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n,count;
    cin>>n;
    count = (n-2);
    for(int i = 2 ; i < n-2 ; i++){

    	for(int j = i+1; j<n-1;j++){
    		if(n%j==0){
    			if((n-(j*((n/j)-1)))%i == 0){
    				count++;
    				cout<<i<<" "<<j<<endl;
    			}
    		}
    		else{
    			// cout<<i<<"  "<<j<<" "<<n-(j*int(n/j)-1)<<endl;
    			if(((n-(j*int(n/j)))%i == 0) || (n-(j*(int(n/j)-1)))%i == 0){

    				count++;
    				cout<<i<<" "<<j<<endl;
    			}
    		}
    	}
    }
    cout<<count;
    return 0;
}
