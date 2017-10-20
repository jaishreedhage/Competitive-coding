#include <iostream>
#include <vector>
using namespace std;

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        int n,m;
        cin>>n>>m;
        // int ar[2*m];
        // for(int i=0;i<2*m;i++){
        //     cin>>ar[i];
        // }
        if(n%2==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        Q--;
    }
    return 0;
}
