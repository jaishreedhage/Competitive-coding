#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,c1,c2,c3,c4,min,min1,min2,flag1=0,flag2=0,area1=0,area2=0;
    vector<int>ar1,ar2;
    cin>>n>>m;
    char ar[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(ar[i][j]=='G'){
                cout<<"INSIDE"<<i<<"  "<<j<<endl;
                flag1++;
                c1=0,c2=0,min=0;
                for(int k=i-1;k>=0;k--){
                    if(ar[k][j]=='G')
                        c1++;
                    else 
                        break;
                }
                for(int k=i+1;k<n;k++){
                    if(ar[k][j]=='G')
                        c2++;
                    else 
                        break;
                }
                if((c1>0)&&(c2>0)){
                    cout<<"FIRST"<<endl;
                    min=c1<c2?c1:c2;
                    c3=0;c4=0,min1=0;
                    for(int k=j-1;k>=0;k--){
                        if(ar[i][k]=='G')
                            c3++;
                        else 
                            break;
                    }
                    for(int k=j+1;k<m;k++){
                        if(ar[i][k]=='G')
                            c4++;
                        else 
                            break;
                    }
                    cout<<c3<<"  "<<c4<<" "<<min<<endl;
                    if(c3>0 && c4>0){
                        min1=c3<c4?c3:c4;
                        
                        flag2++;
                        flag1--;                        
                        min2 = min<min1?min:min1;
                        int val = (4*min2)+1;
                        if(flag2==1){
                            area1=(4*min2)+1;
                            ar1.push_back(i+min2);
                            ar1.push_back(i-min2);
                            ar1.push_back(j+min2);
                            ar1.push_back(j-min2);
                        }
                        else{
                            if(val>area1)
                                area1=val;
                            else if(val>area2)
                                area2=val;
                        }
                        cout<<min2<<" "<<area1<<"  "<<area2<<endl;
                    }
                    
                }
            }
            if(flag2==2)
                break;
        }
        if(flag2==2)
            break;
    }
    if(flag1==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1)
                    if(ar[i][j]=='G')
                        flag1++;
            }
        }
    }
    if(flag2==2)
        cout<<area1*area2;
    else if(flag2==1 && flag1>=1)
        cout<<area1;
    else if(flag1>=2)
        cout<<1;
    return 0;
}
