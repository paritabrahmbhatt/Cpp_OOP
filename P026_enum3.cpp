#include <iostream>
using namespace std;

enum Paint { red, blue, yellow, green, orange, purple }; 

int main(){
    Paint color = green; 
    if(color == 0||color==1||color==2)
        cout<<"Primary color\n";
    else 
        cout<<"Mixed color\n";
    return 0;
}
