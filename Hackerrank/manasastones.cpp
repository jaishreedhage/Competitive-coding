#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void stones(int a,int b,int val,int st,int n,map<int,int> &ar){
    if(st==n){
        int flag=0;
        map<int,int>::iterator it;
        it = ar.find(val);
        if(it==ar.end()){
            ar.insert(pair<int,int>(val,1));
            cout<<val<<" ";
        }
        
            
       
    }
    else{
        stones(a,b,val+a,st+1,n,ar);
        stones(a,b,val+b,st+1,n,ar);
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin>>Q;
    while(Q>0){
        int n,a,b;
        cin>>n>>a>>b;
        map<int,int>ar;
        stones(a,b,0,1,n,ar);
        cout<<endl;
        Q--;
    }
    return 0;
}
