#include <iostream>
using namespace std;

enum VehicleType{
    twowheeler, threewheeler, fourwheeler
};

int main(){
    VehicleType vehicle = twowheeler;
    switch(vehicle){
        case twowheeler:
            cout<<"Vehicle has two wheels"<<endl;
            break;
        case threewheeler:
            cout<<"Vehicle has three wheels"<<endl;
            break;
        case fourwheeler:
            cout<<"Vehicle has four wheels"<<endl;
            break;
        default:
            cout<<"Vehicles can have 2, 3 or 4 wheels"<<endl;
    }
    return 0;
}
