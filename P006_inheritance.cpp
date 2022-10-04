#include<bits/stdc++.h>
using namespace std;

class Shape{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }

};

//Derived class
class Square : public Shape{
    public:
        int getArea(){
            return(width * height);
        }

};

int main(){
    Square seq;
    seq.setWidth(7);
    seq.setHeight(7);

    cout<<"Total Area: "<<seq.getArea()<<endl;
    return 0;
}
