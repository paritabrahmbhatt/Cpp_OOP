#include <iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout<<"Base class show fucntion has been called\n";
        }
        virtual void print(){
            cout<<"Base class print fucntion has been called\n";
        }
};

class Child:public Parent{
    void show(){
        cout<<"Derived class show fucntion has been called\n";
    }
    virtual void print(){
        cout<<"Derived class print fucntion has been called\n";
    }    
};

int main() {
    Parent *baseptr;
    
    Child derivedObj;
    baseptr = &derivedObj; //Passing the address of parent object
    
    //runtime polumorphism
    baseptr -> print(); //Derived class print function was called because print() was a virtual function
    baseptr -> show(); // base class object was caleed
    
    return 0;
}
