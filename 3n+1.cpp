#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int check(int n,int m,int ar[]){
    int count = 1, max_count = INT_MIN;
    for(int i=n;i<=m;i++){
        count = 1;
        int val = i;
        if(ar[val]!=0){
            count += ar[val];
            // cout<<"** "<<i<<endl;
            count-- ;
        }
        else{
            if(val%2 == 0)
                val = val/2;
            else
                val = 3*val + 1;
            count += check(val,val,ar);
        }
        // cout<<i<<" "<<count<<endl;
        ar[i] = count;
        if(count>max_count)
            max_count = count;
    }
    return max_count;
}

int main(){

    static int ar[99999999];
    memset(ar,0,sizeof(ar));
    ar[1] = 1;
    int n,m;
    while(cin>>n>>m){
        // cin>>m;
        int value = check(n,m,ar);
        cout<<n<<" "<<m<<" "<<value<<endl;
        // Q--;
    }
    return 0;
}
