#include <iostream>
using namespace std;

class A{
    static int n;
public:
    void set(int i){
        n=i;
    }
    int get(){
        return n;
    }
};

int A::n;

class B:private A{
    int m;
public:
    void set_m(int i){
        m=i;
    }
    int get_m(){
        return m;
    }
    friend void get_all(B ob);
};

void get_all(B ob){
    // ob.set(10);
    cout<<ob.get()<<" "<<ob.get_m();
}

int main(){
    B ob2;
    A ob1;
    ob1.set(8);
    ob2.set_m(4);
    get_all(ob2);
}
