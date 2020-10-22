#include <bits/stdc++.h>
using namespace std;

class employee{
    char name[80];
public:
    void putname(char *n);
    void getname(char *n);
private:
    double wage;
public:
    void putwage(double w);
    double getwage();

};
void employee::putname(char *n)
{
    strcpy(name, n);
}
void employee::getname(char *n)
{
    strcpy(n, name);
}
void employee::putwage(double w)
{
    wage = w;
}
double employee::getwage()
{
    return wage;
}

int main(){
    employee ted;
    char name[80];
    ted.putname("Ted Jones");
    ted.putwage(75000);
    ted.getname(name);
    cout << name << " makes $";
    cout << ted.getwage() << " per year.";
    return 0;
}