#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void rotate(long long int ar[],int n,int r){
    if(r%n==0)
        return;
    
    else{
        int rt = r%n;
        rt=n-rt;
        int ar1[n];
        for(int i=0;i<n;i++)
            ar1[(i+rt)%n]=ar[i];
        for(int i=0;i<n;i++)
            ar[i]=ar1[i];
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m,n,r;
    cin>>m>>n>>r;
    long long int ar[m][n],sorted[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    long long int ar1[m/2][2*n + 2*m -4];
    int numbr[m/2];
    for(int i=1;i<=m/2;i++){
        int j=i-1,k=i-1;
        int idx=-1;
        while(j<=n-i){
            ar1[i-1][++idx]= (ar[k][j++]);
        }
        j--; k++;
        while(k<=m-i){
            ar1[i-1][++idx]= (ar[k++][j]);
        }
        k--; j--;
        while(j>=0+(i-1)){
            ar1[i-1][++idx]= (ar[k][j--]);
        }
        j++; k--;
        while(k>0+(i-1)){
            ar1[i-1][++idx]= (ar[k--][j]);
        }   
        numbr[i-1]=idx;  
    }
    
    for(int i=0;i<m/2;i++){
        rotate(ar1[i],numbr[i]+1,r);
    }
    
     for(int i=1;i<=m/2;i++){
        int j=i-1,k=i-1;
        int idx=-1;
        while(j<=n-i){
            sorted[k][j++] = ar1[i-1][++idx];
        }
        j--; k++;
        while(k<=m-i){
            sorted[k++][j] = ar1[i-1][++idx];
        }
        k--; j--;
        while(j>=0+(i-1)){
            sorted[k][j--] = ar1[i-1][++idx];
        }
        j++; k--;
        while(k>0+(i-1)){
            sorted[k--][j] = ar1[i-1][++idx];
        }   
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<sorted[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
