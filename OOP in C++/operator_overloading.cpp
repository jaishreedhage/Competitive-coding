#include <iostream>
using namespace std;

class loc {
    int longitude, latitude;
public:
    loc() {}
    loc(int lg, int lt) {
        longitude = lg;
        latitude = lt;
    }

    void show() {
        cout << longitude << " ";
        cout << latitude << "\n";
    }

    loc operator+(loc op2);

    friend loc operator--(loc op);

    loc operator++(){
        this->latitude = this->latitude + 1;
        this->longitude=this->longitude + 1;
        return *this;
    }

    loc operator++(int x){
        this->latitude = this->latitude + 1;
        this->longitude=this->longitude + 1;
        return *this;
    }
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + this->longitude;
    temp.latitude = op2.latitude + this->latitude;
    return temp;
}

loc operator--(loc op){
    loc temp;
    cout<<op.latitude << " "<<op.longitude<<endl;
    temp.latitude = op.latitude - 1;
    temp.longitude = op.longitude - 1;
    return temp;
}

int main()
{
    loc ob1(10, 20), ob2( 5, 30),ob3(10,10);
    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    ob1 = ob1 + ob2 + ob3;
    ob1.show();
    ob2 = ob2++;
    ob2.show(); // displays 15 50
    ob2 = ++ob2;
    ob2.show();
    ob3= --ob3;
    ob3.show();
    return 0;
}
