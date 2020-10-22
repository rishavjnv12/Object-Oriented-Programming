#include <iostream>
#include <string>

using namespace std;
class obj{
    
public:
    static int count;
    obj(){
        count++;
        cout << "Obj no: " << count << endl;
    }
};

int obj::count = 0;

int main(){
    obj obj1[10];

    cout << "No. of objects " << obj::count << endl; // Only of static var is declared public in class
    obj newobj;
    cout << newobj.count << endl;
    return 0;
}