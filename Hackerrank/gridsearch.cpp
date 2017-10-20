#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        int flag;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                flag=0;
                if(G[i][j]==P[0][0]){

                    // cout<<i<<" "<<j<<endl;
                    
                    for(int k=0;k<r;k++){
                        for(int l=0;l<c;l++){
                            if(i+k >= R || j+l>=C || G[i+k][j+l]!=P[k][l]){
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1){
                            break;
                        }
                    }
                    if(flag==0){
                        flag=2;
                        break;
                    }
                    
                }
                
            }
            if(flag==2)
                break;
        }
        if(flag==2)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}
