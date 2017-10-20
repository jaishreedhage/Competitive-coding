#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        int n;
        cin>>n;
        char ar[2][n];
        int ar2[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++)
                cin>>ar[i][j];
        }
        memset(ar,0,sizeof(ar));
        int flag=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                if(ar[i][j]=='#'){
                    int count=0;
                    if(i-1>=0 && ar[i-1][j]=='#')
                        count++;
                    if(i+1<2 && ar[i+1][j]=='#')
                        count++;
                    if(j-1>=0 && ar[i][j-1]=='#')
                        count++;
                    if(j+1<n && ar[i][j+1]=='#')
                        count++;
                    if(count>2){
                        flag=1;
                        cout<<i<<" "<<j<<endl;
                        break;
                    }

                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        Q--;
    }
    return 0;
}
