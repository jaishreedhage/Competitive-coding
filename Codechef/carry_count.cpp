#include<iostream>

using namespace std;

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        long long n1,n2,count=0,carry=0;
        cin>>n1>>n2;
        while(n1>0 && n2>0){
            int a = n1%10;
            int b = n2%10;
            int s = a+b+carry;
            if(s>9)
                count++;
            carry = s/10;
            n1 = n1/10;
            n2 = n2/10;
        }
        while(n1>0){
            int a = n1%10;
            int s = a+carry;
            if(s>9)
                count++;
            carry = s/10;
            n1 = n1/10;
        }
        while(n2>0){
            int a = n2%10;
            int s = a+carry;
            if(s>9)
                count++;
            carry = s/10;
            n2 = n2/10;
        }
        cout<<count<<endl;
        Q--;
    }
    return 0;
}
