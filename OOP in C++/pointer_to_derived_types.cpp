#include <iostream>
using namespace std;

class A{
    int i;
public:
    int a;
    void set_i(int j){
        i=j;
    }
    int get_i(){
        cout<< i<<endl;
    }

    void set_a(int n){
        a=n;
    }
    int get_a(){
        cout<< a<<endl;
    }
};

class B:public A{
    int j;
public:
    void set_j(int n){
        j=n;
    }
    void set_a(int n){
        a=n;
    }
    int get_a(){
        cout<< a<<endl;
    }
    int get_j(){
        cout<<j<<endl;
    }
};

int main(){
    A ob1;
    B ob2;
    ob1.set_i(5);
    ob2.set_j(6);
    ob1.get_i();
    // ob2.set_j(7);
    ob2.set_a(7);
    ob2.get_a();



    A *ob;
    B p;
    ob = &p;
    ob->set_i(6);
    ob->get_i();
    ob->set_a(9);
    ob->get_a();
    p.set_a(19);
    p.get_a();
    cout<<ob->a<<endl;

    ob = ((B*)ob);
    ob->set_j(9);
    ob->get_j();

    //
    // B *p1;
    // A obj;
    // p1 = &obj;
}
