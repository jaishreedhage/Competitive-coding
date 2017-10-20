#include <iostream>
using namespace std;


class A{
    int n ;
public:
    void set(int i){
        n=i;
    }
    int get(){
        return n;
    }
};


class B:public A{
    int m;
public:
    void set_m(int i){
        m=i;
        set(14);
    }

    int get(){
        int s = A::get();
        cout<<"Hey "<<s<<endl;
        return m;
    }
};

int main(){

    B ob2;
    A ob1;
    ob1.set(8);
    ob2.set_m(4);
    cout<<ob2.get();
}
