#include<iostream>

using namespace std;

class Myclass{
    private:
        int x,y;
    public:
        static int n;
        //constructor default
        Myclass(){ }
        Myclass(int x1, int x2){
            n++;
            cout<< "constructor is called\n";
            x = x1;
            y = x2;
        }

        Myclass(const Myclass &copycont){
            y = copycont.x; // value of y of construcotr is given to x of copy 
            // RHS assignment
            x = copycont.y;
            n++;
        }
        ~Myclass();
        int getX(){ return x;}
        int getY(){return y;}
};

int Myclass::n=0;

int main(){
    Myclass p3;
    Myclass p4;
    Myclass p1(10, 20);
    Myclass p2(p1);

    cout<<"x for p1: " << p1.getX() << " " << "x for p2: " << p2.getX() << endl;
    cout<<"y for p1: " << p1.getY() << " " << "y for p2: " << p2.getY() << endl;
    cout<<"number of times Myclass const called: " << Myclass::n << endl;

    return 0;
}