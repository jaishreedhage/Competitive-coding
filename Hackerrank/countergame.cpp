#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,count=0;
    cin>>t;
    long long unsigned n;
    
    for(int i=1;i<=t;i++){
        cin>>n;
        count=0;
        while(n!=1){
            count = (count+1)%2;
            double s = log2(n);
            if(s==int(s)){
                n=n/2;
            }
            else{
                n -= 2*int(log2(n));
                

            }
        }
        if(count==1)
            cout<<"Louise"<<endl;
        else
            cout<<"Richard"<<endl;
    }
    return 0;
}
