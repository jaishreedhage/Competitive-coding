#include <iostream>
using namespace std;

class cl {
    int i;
public:
    cl(int j) { i=j; }
    int get_i() { return i; }
};

int main()
{
    cl ob[3]={1,2,3}, *p;
    p = ob;
    cout << p->get_i();
    return 0;
}
