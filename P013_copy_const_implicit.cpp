// EXAMPLE OF IMPLICIT CONSTRUCTOR
#include<iostream>
using namespace std;

class Myclass{
    private: 
        int x,y;

    public:
        Myclass(int x1, int y1){
            x = x1;
            y = y1;
        }

        int getX(){return x;}
        int getY(){return y;}

};

int main(){
    Myclass p1(100,120);
    Myclass p2(p1); //Myclass p2 = p1;

    cout<<"x of P1: "<< p1.getX() << " " << "x of P2: "<< p2.getX() << endl;
    cout<<"y of P1: "<< p1.getY() << " " << "y of P2: "<< p2.getY() << endl;
    return 0;
}