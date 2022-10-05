// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

// FUNCTION OVERLOADING
class MyBaseClass{
    public:
        int x;
        MyBaseClass(){
            x = 10;
            y = 20;
            z = 30;
        }
        void printProtectedData(){
            cout << "Y: " << y << endl;
        }
    private:
        int z;
    protected:
        int y;
};

class MyDerivedClass : public MyBaseClass{
    public:
        MyDerivedClass(){
            cout<<"Dervied class is called"<<endl;
        }
};

void myOutsidefun(MyBaseClass obj){
    cout << "X: " << obj.x << endl;
    //cout << "Y: " << obj.y << endl; // this will throw an error
    obj.printProtectedData();
    //cout << "Z: " << obj.z << endl; //this will throw an error
}

int main(){
    MyBaseClass x;
    myOutsidefun(x);
    
    MyDerivedClass y;
    myOutsidefun(y);
    
    return 0;
}
