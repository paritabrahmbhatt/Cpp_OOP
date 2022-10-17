#include <iostream>

using namespace std;

class Distance{
    private:
        int meters;
    public:
        Distance(){
            cout<<"default constructor has been called\n";
            meters = 0;
        }
        void displayData(){
            cout<<"Meter Values: "<<meters<<endl;
        }
        friend void addValues(Distance &d);
};

void addValues(Distance &d){
    cout<<"I am a friend function\n";
    d.meters = d.meters+5;
}

int main()
{
   Distance d1; //meters = 0
   d1.displayData(); //0
   addValues(d1); //pass by reference
   d1.displayData(); //5
}
