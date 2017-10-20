#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rotate(int ar[],int sorted[],int i,int n){
    if(ar[i+2]==sorted[i]){
        int temp=ar[i];
        ar[i]=ar[i+2];
        int temp2=ar[i+1];
        ar[i+1]=temp;
        ar[i+2]=temp2;
    }
    else{
        int temp=ar[i];
        ar[i]=ar[i+1];
        int temp2=ar[i+1];
        ar[i+1]=ar[i+2];
        ar[i+2]=temp;
    }
    if(ar[i]==sorted[i]){
        if(ar[i+1]==sorted[i+1]){
            if(ar[i+2]==sorted[i+2])
                return 2;
            else
                return 1;
        }
        return 0;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,Q;
    cin>>Q;
    while(Q>0){
       // cout<<Q<<endl;
        cin>>n;
        int ar[n],sorted[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sorted[i]=ar[i];
        }
        sort(sorted,sorted+n);
        for(int j=0;j<n;j++)
            cout<<sorted[j]<<" ";
        cout<<endl;
        int flag=0;
        for(int i=0;i<n;i++){
            if(ar[i]!=sorted[i]){
                flag=2;
                if(i+2>=n){
                    flag=3;
                    break;
                }
                else{
                    int val = rotate(ar,sorted,i,n);
                    cout<<val<<endl;
                    for(int j=0;j<n;j++)
                        cout<<ar[j]<<" ";
                    if(val==1)
                        i++;
                    else if(val==2)
                        i=i+3;
                    flag=4;
                 }
            }
        }
        if(flag==0 || flag==4)
            cout<<"YES"<<endl;
        else if(flag==3)
            cout<<"NO"<<endl;
        Q--;
    }
    return 0;
}
