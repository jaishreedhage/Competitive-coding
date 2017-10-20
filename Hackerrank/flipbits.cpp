#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long unsigned int ans(int n){
    long long unsigned int val = 0,s,r,count=0;
    while(count!=32){
        r = n%2 ; 
        cout<<r<<endl;
        if(r == 0)
            s = 1;
        else
            s=0;
        val += s*pow(2,count);
        n=n/2;
        count++;
        // cout<<val<<endl;
    }
    return val;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    long long int n;
    cin>>t;
    for(int i = 1;i<=t;i++){
        cin>>n;
        cout<<ans(n)<<endl;
    }
    return 0;
}
