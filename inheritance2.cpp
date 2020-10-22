#include <iostream>
using namespace std;

class base{
    int i,j;
public:
    void set(int a,int b){
        i = a;
        j = b;
    }
    void show(){
        cout << i << " " << j << endl;
    }
};

class derived : private base{
    int k;
public:
    derived(int x){
        k = x;
        this->set(11,12);
    }
    void showk(){
        this->show();
        cout << k << endl;
    }
};

int main(){
    // base b;
    // b.set(10,20);
    // b.show();
    derived d(10);
    d.showk();
    // d.set(2,3); Error
    // d.show(); Error
    return 0;
}
// When the base class is inherited by using the private access specifier, all public and
// protected members of the base class become private members of the derived class.