#include<iostream>

using namespace std;

class Complexfun{
    private:
        int real, imag;
    
    public:
        Complexfun(int r, int i){
            real = r;   imag = i;}
        Complexfun operator + (Complexfun const &b){

        }
        
        int getReal(){return real;}
        int getImag(){return imag;}
};