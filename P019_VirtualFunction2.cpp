#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void eat(){
            cout<<"I am eating generic food!\n";
        }
};

//derived 1
class Cat: public Animal{
    void eat(){
        cout<<"I am eating cat food.\n";
    }
};

//derived 2
class Dog: public Animal{
    void eat(){
        cout<<"I am eating dog food.\n";
    }
};
//stand alone function
void function(Animal *xyz){
    xyz -> eat();
}

int main() {
    Animal *ptr;
    Cat catobj;
    Dog dogobj;
    ptr = &catobj;
    function(ptr);
    ptr = &dogobj;
    function(ptr);
    return 0;
}
