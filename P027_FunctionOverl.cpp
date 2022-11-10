#include<iostream>

using namespace std;

class Myclass{
public:
    void fun(int x){ cout<<"Interger\n";}
    void fun(double y){ cout<<"Double\n";}
};

int main(){
    Myclass t1;
    t1.fun(10);
    t1.fun(20.4);
    t1.fun(20.4);
    t1.fun(15);
    return 0;
}