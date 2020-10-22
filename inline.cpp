#include <bits/stdc++.h>
using namespace std;
inline int max(int a,int b){
    // return a>b?a:b;
    if(a>b)
        return a;
    return b;
}
inline int fact(int n){
    return n==0?1:n*fact(n-1);
}
int main(){
    cout << max(30,20) << endl;
    cout << fact(10) << endl;
    return 0;
}