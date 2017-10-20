#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long unsigned int n,k,t;
    string s;
    cin>>n>>k;
    cin>>s;
    int c=1,j;
    long unsigned ar[n];
    ar[0]=s[0];
    for(long unsigned int i=1,l=0;i<n;i++){
    	ar[i] = 0;
		t = l;
		if(l<k-1){
			while(t>0){
				ar[i] = ar[i]^ar[i-t];
				t--; 
			}
			int xyz = ar[i]^s[i];
			cout<<ar[i]<<"*****"<<xyz<<endl;
			ar[i] ^= s[i];
			l++;
		}
		else{
			t=k;
			j=c;
			while(t>0){
				ar[i] = ar[i]^ar[j];
				j++;
			}
			ar[i] = ar[i]^s[i];
			c++;
		}
		cout<<s[i]<<"  "<<ar[i]<<endl;
    }
    for(int i=0;i<n;i++)
    	cout<<ar[i];
    return 0;
}
