#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
        void myMethod();
};

void myClass::myMethod(){
    cout<<"Hello World!";
}
int main() {
    myClass myObj;
    myObj.myMethod();
    return 0;
}