#include<bits/stdc++.h>
using namespace std;

class myCar{
    public:
    int year;
    string modelname;
    string color;

};

int main() {
    myCar BMW;
    BMW.year = 2030;
    BMW.modelname = "Latest";
    BMW.color = "Grey";

    cout<<BMW.year<<" "<<BMW.modelname<<" "<<BMW.color;
    return 0;
}