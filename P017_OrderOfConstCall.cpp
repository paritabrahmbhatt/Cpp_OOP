#include <iostream>
using namespace std;

class Parent1{
  public:
    Parent1(){
        cout<<"Parent 1 has been called"<<endl;
    }
};

class Parent2{
    public:
        Parent2(){
            cout<<"Parent 2 has been called\n";
        }
};

class Child: public Parent1, public Parent2{
    public:
        Child(){
            cout<<"Constructor of Child has been called\n";
        }
};
int main() {
    Child obj1;

    return 0;
}
