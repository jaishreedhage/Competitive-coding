#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,l,r;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(ar[i+1]>=ar[i]){
            //do nothing
        }
        else{
            if(i+2 < n && ar[i+2]>ar[i]){
                for(int j=i+2;j<n-1;j++){
                    if(ar[j+1]<ar[j]){
                        flag=4;
                        break;
                    }
                }
                if(flag==4)
                    break;
                else if(flag==0){
                    for(int j=0;j<i;j++){
                        if(ar[j]>ar[i+1]){
                            flag=4;
                            break;
                        }
                    }
                    if(flag==4)
                        break;
                    flag=3;
                    l=i; r=i+1;
                    break;
                }
            }
            else if(i+2>=n){
                for(int j=0;j<i;j++){
                    if(ar[j]>ar[i+1]){
                        flag=4;
                        break;
                    }
                }
                
                if(flag==4)
                    break;
                flag=3;
                l=i;r=i+1;
                break;
            }
            else if(i+2<n && ar[i+2]<ar[i]){
                for(int j=i+3;j<n;j++){
                    if(ar[j]>=ar[i]){
                        flag=2;
                        l=i;r=j-1;
                        break;
                    }
                }
                if(flag==2){
                    for(int j=r+1;j<n-1;j++){
                        if(j+1<n && ar[j]>ar[j+1]){
                            flag=4;
                            break;
                        }
                    }
                    if(flag==4){
                        break;
                    }
                    else{
                        // cout<<"****"<<endl;
                        for(int j=0;j<i;j++){
                            if(ar[j]>ar[r]){
                                flag=4;
                                break;
                            }
                        }
                        if(flag==4)
                            break;
                        else{
                            // cout<<r<<" "<<l<<endl;
                            int j;
                            for(j=r;j>i;j--){
                                if(ar[j-1]<ar[j]){
                                    flag=4;
                                    // cout<<ar[j+1]<<" "<<ar[j];
                                    break;
                                }
                            }
                            if(flag==4){
                                if(j==r-1){
                                    flag=3;
                                    break;
                                }
                                break;
                            }
                            break;
                            // cout<<"**"<<flag<<endl;
                        }
                    }
                }
                else if(flag==0){
                    // cout<<"***";
                    for(int j=n-1;j>i;j--){
                        if(ar[j-1]<ar[j]){
                            flag=4;
                            break;
                        }
                    }
                    if(flag==4)
                        break;
                    flag=2;
                    l=i;
                    r=n-1;
                    break;
                }
            }
        }
    }
    if(flag==4)
        cout<<"no"<<endl;
    else if(flag==0)
        cout<<"yes"<<endl;
    else if(flag==3)
        cout<<"yes"<<endl<<"swap "<<l+1<<" "<<r+1;
    else if(flag==2)
        cout<<"yes"<<endl<<"reverse "<<l+1<<" "<<r+1;
    
    return 0;
}
