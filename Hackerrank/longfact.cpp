#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int res[1000],res_size=1;

void multiply(int n){
	int carry=0,val;
	for(int i=0;i<res_size;i++){
		val = (n*res[i])+carry;
		if(val>9){
			res[i] = val%10;
			carry = val/10;
		}
		else{
			res[i]=val;
			carry=0;
		}
	}
	while(carry>0){
		res[res_size] = carry%10;
		res_size ++;
		carry = carry/10;
	}
}

int main(){
    int n;
    cin >> n;
    if(n==1){
    	cout<<1;
    	return 0;
    }
    res[0]=1;
    for(int i=2;i<=n;i++){
    	multiply(i);
    }
    for(int i=res_size-1;i>=0;i--)
    	cout<<res[i];
    return 0;
}
