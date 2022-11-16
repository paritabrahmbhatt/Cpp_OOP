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
   shared_ptr<Rectangle> P1(new Rectangle(10,5));
   cout<< P1 -> area() <<endl;
   shared_ptr<Rectangle> P2;
   shared_ptr<Rectangle> P3 = make_shared<Rectangle> (40,2);
   P2 = P1; 
   
   cout<< P2 -> area() <<endl;
   cout<< P1 -> area() <<endl; 
   cout<< P3 -> area() <<endl;
   cout<<P1.use_count()<<endl; // Reference counter
   cout<<P2.use_count()<<endl;
   
   cout<<P3.use_count()<<endl;
    return 0;
}
