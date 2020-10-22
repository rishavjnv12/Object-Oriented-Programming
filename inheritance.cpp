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

class derived : public base{
    int k;
public:
    derived(int x){
        k = x;
    }
    void showk(){
        cout << k << endl;
    }
};

int main(){
    base b;
    b.set(10,20);
    b.show();
    derived d(10);
    d.showk();
    d.set(2,3);
    d.show();
    return 0;
}

// When the access specifier for a base class is public, all public members of the base
// become public members of the derived class, and all protected members of the base
// become protected members of the derived class. In all cases, the base's private elements
// remain private to the base and are not accessible by members of the derived class.