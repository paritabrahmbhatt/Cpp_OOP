// Online C++ compiler to run C++ program online
#include <iostream>
#include <memory>
using namespace std;

class Rectangle{
    int breadth;
    int length;
public:
    Rectangle(int b, int l){
        breadth = b;
        length = l;
    }
    int area(){
        return length * breadth;
    }
};
int main() {
    // Write C++ code here
   unique_ptr<Rectangle> P1(new Rectangle(10,5));
   cout<< P1 -> area() <<endl;
   unique_ptr<Rectangle> P2;
   //P2 = P1; //throwing erroe
   P2= move(P1);
   cout<< P2 -> area() <<endl;
   cout<< P1 -> area() <<endl; //Segmentation Fault
    return 0;
}
