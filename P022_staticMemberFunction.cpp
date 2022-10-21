#include<iostream>
using namespace std;

class Myclass{
    private:
        int x;
        static int y;
    public:

        Myclass(){
            y++;
        }

        static int getCount(){
            //return x;
            return y;
        }
};

int Myclass::y=0;

int main(){
    cout<<"Initial Count: "<<Myclass::getCount()<<endl;
    Myclass obj1;
    //cout<<"Count after one object: "<<Myclass::y<<endl; This won't work because now the static member is private
    cout<<"Count after one objects: "<<Myclass::getCount()<<endl;
    Myclass obj2;
    cout<<"Count after two objects: "<<Myclass::getCount()<<endl;
    return 0;
}