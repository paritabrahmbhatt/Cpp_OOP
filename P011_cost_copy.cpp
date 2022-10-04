#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string make; 
        string model;
        string color;
        string fuel_type;
        int year;
        int miles;
    public:

        //default constructor
        Car(){
            cout<<"Default Construct called\n";
            make = "BMW";
        }

        //Parameterised contructor
        Car(string mak, string mod,string c,string type, int y, int m){
            cout<<"Parameterised Construct called\n\n";
            make = mak;
            model = mod;
            color = c;
            fuel_type = type;
            year = y;
            miles = m;
        }

        //Copy constructor
        Car(Car &obj){
            cout << "Copy Constrcutor called\n";
            make = obj.make;
            model = obj.model;
            color = obj.color;
            fuel_type = obj.fuel_type;
            year = obj.year;
            miles = obj.miles;
        }
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
            cout << "Miles per Gallon: " << miles << endl<<endl;
        }

        ~Car(){
            cout << "Destructor called\n";
        }

};

int main(){
    Car car1,car2("BMW","X1","Black","Gas",2022, 100);
    car1.setData("BMW","X3","White","Gas",2020, 120);
    car1.displayData();
    car2.displayData();
    Car car3 = car1; //Copy contruct using default construct
    car3.displayData();
    return 0;
}