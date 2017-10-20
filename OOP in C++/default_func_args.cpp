#include <iostream>
using namespace std;

void f(int s,int f);

void f(int s,int f=2){
    cout<<s*f<<endl;
}

int main(){
    f(4);
    return 0;
}
