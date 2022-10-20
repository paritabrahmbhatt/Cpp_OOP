#include <iostream>
#include<string>
#include <memory>
using namespace std;

class Animal{
    public:
        virtual void printVoice() = 0;
};

class Tiger: public Animal{
    public:
        void printVoice(){
            cout<<"I am a tiger, my name is Ronald, I roar, and I eat meat\n";
        }
};

class Wolf: public Animal{
    public:
        void printVoice(){
            cout<<"I am a wolf, my name is Rex, I growl, and I eat chicken\n";
        }
};

class Kangaroo: public Animal{
    public:
        void printVoice(){
            cout<<"I am a tiger, my name is Ronald, I roar, and I eat meat\n";
        }
};

class Lemur: public Animal{
    public:
        void printVoice(){
            cout<<"I am a lemur, my name is Fluffy, I squeak, and I eat fruit\n";
        }
};

class Serpent: public Animal{
    public:
        void printVoice(){
            cout<<"I am a serpent, my name is George, I hiss and I eat mice\n";
        }
};

class Zoo{
    private:
        Animal* pAnimal;

    public:
        Zoo(string type){
            if(type == "tiger")
                pAnimal = new Tiger();
            else if(type == "wolf")
                pAnimal = new Wolf();
            else if(type == "kangaroo")
                pAnimal = new Kangaroo();
            else if(type=="lemur")
               pAnimal = new Lemur();
            else if(type == "serpent")
               pAnimal = new Serpent;
        }
        ~Zoo(){
            if (pAnimal) {
                delete pAnimal;
                pAnimal = NULL;
            }
        }
        Animal* getPAnimal() { return pAnimal; }      
};

int main() {
    Zoo* pZoo = new Zoo("tiger");
    Animal* pAnimal = pZoo->getPAnimal();
    pAnimal->printVoice();
    return 0;
}
