#include <iostream>

using namespace std;

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        int n,count=0;
        cin>>n;
        char ar[2][n];
        for(int i=0;i<2;i++)
            for(int j=0;j<n;j++)
                cin>>ar[i][j];
        for(int i=0;i<n;i++){
            if(ar[0][i] == '*' && ar[1][i]=='*'){
                count++;
                break;
            }
        }
        for(int j=0;j<n-1;j++){
            if(ar[0][j]=='*' || ar[1][j]=='*'){
                int flag = 0,k;
                for(k=j+1;k<n;k++){
                    if(ar[0][k]=='*' || ar[1][k]=='*'){
                        flag = 1;
                        break;
                    }
                }
                if(flag==1){
                    count++;
                    j=k-1;
                }
            }
        }
        cout<<count<<endl;
        Q--;
    }
    return 0;
}
