#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    loc operator+(loc op2);
    loc operator-(loc op2);
    bool operator==(loc op2);
    loc operator++();      // ++obj;
    loc operator++(int x); //onj++;
    loc operator+=(loc op2);
};
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude = -op2.longitude + longitude;
    temp.latitude = -op2.latitude + latitude;
    return temp;
}
bool loc::operator==(loc op2)
{
    cout << "== operator " << endl;
    return longitude == op2.longitude and latitude == op2.latitude;
}
loc loc::operator++()
{
    longitude++;
    latitude++;
    return *this;
}
loc loc::operator++(int x)
{
    longitude++;
    latitude++;
    return *this;
}
loc loc::operator+=(loc op2)
{
    longitude = op2.longitude + longitude;
    latitude = op2.latitude + latitude;
    return *this;
}
int main()
{
    loc ob1(10, 20), ob2(5, 30);
    ob1+=ob2;
    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    // ob1 = ob1 + ob2;
    // ob1 = ob1 - ob2;
    ob1 = ob1 + ob2;
    // cout << (ob1 == ob2) << endl;

    ob1.show(); // displays 15 50
    return 0;
}

// One last point about the operator+( ) function: It does not modify either operand.
// Because the traditional use of the + operator does not modify either operand, it makes
// sense for the overloaded version not to do so either. (For example, 5+7 yields 12, but
// neither 5 nor 7 is changed.) Although you are free to perform any operation you want
// inside an operator function, it is usually best to stay within the context of the normal
// use of the operator.