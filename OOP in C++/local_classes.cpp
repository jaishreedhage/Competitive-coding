#include <iostream>
using namespace std ;

void f(){
    static int ab = 5;
    class A{
        int status ;
    public:
        void set(int i){
            status = ab;
        }
        int get(){
            return status;
        }
    };
    A ob;
    ob.set(4);
    cout<<ob.get();
}

int main(){
    f();
    return 0;
}
