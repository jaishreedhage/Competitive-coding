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

void merge(int ar[],int a,int m,int b){
    int left[m-a+1],right[b-m],k=-1;
    for(int i=a;i<=m;i++)
        left[++k]=ar[i];
    k=-1;
    for(int i=m+1;i<=b;i++)
        right[++k]=ar[i];
    int i=0,j=0;
    k=a-1;
    while(i<m-a+1 && j<b-m){
        if(left[i]<right[j]){
            ar[++k]=left[i];
            i++;
        }
        else{
            ar[++k]=right[j];
            j++;
        }
        
    }
    while(i<m-a+1){
        ar[++k]=left[i];
        i++;
    }
    while(j<b-m){
        ar[++k]=right[j];
        j++;
    }
}

void mergesort(int x[],int a,int b){
    if(a<b){
        int m=a+(b-a)/2;
        mergesort(x,a,m);
        mergesort(x,m+1,b);
        merge(x,a,m,b);
    }
}

int main(){
    int n,c=0,flag;
    int k,val,s=0;
    cin >> n >> k;
    int x[n],y[n-1];
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    

    if(n==1){
        cout<<1;
        return 0;
    }

    mergesort(x,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    
    cout<<endl;
    
    vector<int>ar;
    for(int i=0;i<n;i++){
        ar[i]=x[i];
    }

    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<ar.size()-1;i++){
        if(ar[i+1]==ar[i]){
            ar.erase(ar.begin()+(i+1));
            i=i-1;
        }
    }
    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    
    // for(int i=0;i<n-1;i++){
    //     y[i] = x[i+1] - x[i];
    // }
    
   
    
        
    // val = 2*k;
    // for(int i=1;i<n-1;i++){
    //     if(s+x[i+1]-x[i]<=val){
    //         s+=x[i+1]-x[i];
    //     }    
    //     else{
    //         s=0;
    //         c++;
    //         i=i-1;
    //     }
    // }
    // if(s>0){
    //     c++;
    // }
    // cout<<c;

    return 0;
}
