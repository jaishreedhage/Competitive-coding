#include <bits/stdc++.h>

using namespace std;

void order(int n,int l,int t,char ar[]){
    if(n==l){
        ar[l] = '\0';
        cout<<ar<<endl;
        return;
    }
    else if(t==0){
        char bs[5] = {'a','e','i','o','u'};
        for(int i=0;i<5;i++){
            ar[l]=char(bs[i]);
            //cout<<ar<<" "<<l<<endl;
            order(n,l+1,1,ar);
        }
    }
    else if(t==1){
        for(int i=98;i<=122;i++){
            if(char(i)=='y' || char(i)=='a' || char(i)=='e' || char(i)=='i' || char(i)=='o' || char(i)=='u')
                continue;
            ar[l]=char(i);
            order(n,l+1,0,ar);
        }
    }
}

int main(){
    int n;
    cin >> n;
    char ar[n];
    order(n,0,1,ar);
    order(n,0,0,ar);
    return 0;
}
