#include <iostream>
#include<cstring>
using namespace std;

class A{
public:
    void f(){
        cout<<"HELLO";
    }
};

int main(){
    class A{
    public:
        void f(){
            cout<<"AA";
        }
    };
    A x;
    x.f();
    char *str = "Tamil";
    char *abc = "Hindi";
    char *sub1 = str+2;
    char *sub2 = abc+3;
    strcpy(sub1,abc);
    strcpy(sub2,str);
    cout<<sub1<<" "<<sub2;
    // cout<<*str[1];
    return 0;
}
