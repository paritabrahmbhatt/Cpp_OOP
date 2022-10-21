#include<iostream>
using namespace std;

class Myclass{
    public:
        int x;
        static int y;
        Myclass(){
            y++;
        }
};

int Myclass::y=0;

int main(){
    cout<<"Initial Count: "<<Myclass::y<<endl;
    Myclass obj1;
    cout<<"Count after one object: "<<Myclass::y<<endl;
    Myclass obj2;
    cout<<"Count after two objects: "<<Myclass::y<<endl;
    return 0;
}