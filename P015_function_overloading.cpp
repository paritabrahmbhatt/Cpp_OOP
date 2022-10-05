#include <iostream>

using namespace std;

// FUNCTION OVERLOADING
int add(int a, int b){ //1
    cout << "Function 1" << endl;
    return(a+b);
}

double add(double a, double b){ //2
    cout << "Function 2" << endl;
    return(a+b);
}
//3
int add(int a, int b, int c){ 
    cout << "Function 3" << endl;
    return(a+b+c);
}
//4
double add(int a, double b){
    cout << "Function 4" << endl;
    return(a+b);
}

//5
double add(double a,int b){
    cout << "Function 5" << endl;
    return(a+b);
}

int main() {
    cout << add(1,2) << endl;
    cout << add(1.5, 3.7) << endl;
    //cout << add(1.6,3) << endl;
    cout << add(1,2,3) << endl;
    cout << add(1, 2.5) << endl;
    cout << add(2.6,8) << endl;
    

    return 0;
}
