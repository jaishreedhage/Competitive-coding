#include <iostream>
using namespace std ;

class A{
    int s;
    static int b,be;
public:
    A()
    {
        b++;
        cout<<"Constructing "<<b<<endl;
    }
    ~A(){
        be++;
        cout<<"Destroying "<<be<<endl;
    }
    void set_s(int n){s=n;}
    int get_s(){return s;}
};

int A:: b =0;
int A:: be =0;

A f(){
    A ob;
    ob.set_s(5);
    return ob;
}

int main(){
    A a;
    a = f();
    cout<<"Main "<<a.get_s()<<endl;
    return 0;
}
