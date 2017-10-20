#include <iostream>

using namespace std;

class ABC{
    static int a;
    int b;
    public :
        void set(int i,int j){
            a = i;
            b = j;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};

int ABC :: a = 5;

void f(){
    static int xy = 6;
    xy++;
    cout<<"GFRG "<<xy<<endl;
}

int main(){
    ABC x,y;
    x.set(1,1);
    x.show();
    y.set(2,2);
    f();
    f();
    y.show();
    x.show();
    return 0;
}
