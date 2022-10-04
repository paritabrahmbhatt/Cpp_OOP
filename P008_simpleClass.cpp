#include<iostream>
#include<string>
using namespace std;

class Car{
    //data members
    private:
        string make; 
        string model;
        string color;
        string fuel_type;
        int year;
        int miles;
    //member functions
    public:
        void setData(string mak,string mod,string c,string type, int y, int m){
            make = mak;
            model = mod;
            color = c;
            fuel_type = type;
            year = y;
            miles = m;
        }

        void displayData(){
            cout << "Name of Company: " << make << endl;
            cout << "Model Name: " << model << endl;
            cout << "Color: " << color << endl;
            cout << "Fuel type: " << fuel_type << endl;
            cout << "Year: " << year << endl;
            cout << "Miles per Gallon: " << miles << endl;
        }

};

int main(){
    Car car;
    car.setData("BMW","X1","Black","Gas",2022, 100);
    car.displayData();
    return 0;
}