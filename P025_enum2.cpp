// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

enum Family{Pinky=1, Pragnesh, Parita, Aayush};

int main(){
    int who;
    cout<<"This Problem will give you My family's birthdate\n";
    cout<<"Whose birthday do you want to know?\n";
    cout<<"1=Pinky\n";
    cout<<"2=Pragnesh\n";
    cout<<"3=Parita\n";
    cout<<"4=Aayush\n";
    cin>>who;
    
    switch(who){
        case(Pinky): cout<<"Pinky's birthday is on September 17.\n";
                     break;
        case(Pragnesh): cout<<"Pragnesh's birthday is on July 9.\n";
                     break;
        case(Parita): cout<<"Parita's birthday is on November 4.\n";
                     break;
        case(Aayush): cout<<"Aayush's birthday is on August 17.\n";
                     break;
        default: cout<<"Invalid selction\n";
    };
    return 0;
}
