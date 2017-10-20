#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 10000000000
bool prime[N];

void precompute(){
    for(int i=2;i<=sqrt(N-1);i++){
        if(prime[i]==false){
            for(int j=2*i;j<N;j=j+i){
                prime[j]==true;
            }
        }
    }
    cout<<"**"<<endl;
}

int checkdigits(long long unsigned val){
    long long unsigned temp = val,count=0;
    
    while(temp>0){
        count++;
        temp/=10;
    }
    long long unsigned ar[count+1];
    memset(ar,0,sizeof(ar));
    temp=val;
    while(temp>val){
        if(temp%10 > count)
            return 0;
        ar[temp%val]++;
    }
    for(int i=0;i<count+1;i++){
        if(ar[i]==0 || ar[i]>1)
            return 0;
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    
    long long unsigned n;
    cin>>Q;
    while(Q>0){
        cin>>n;
        memset(prime,false,sizeof(prime));
        precompute();
        if(n<=100)
                cout<<-1<<endl;
        else{
            long long unsigned max = 0;
            for(long long unsigned i=101;i<=n;i++){
                if(prime[i]==false && checkdigits(prime[i])==1){
                    if(prime[i]>max)
                        max = prime[i];
                }
            }
        }
        Q--;
    }
    return 0;
}
