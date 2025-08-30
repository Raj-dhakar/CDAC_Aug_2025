#include <bits/stdc++.h>
using namespace std;

/*
Create a class ComplexNumber with data members real, imaginary.
Create Default and Parameterized constructors.
Write getters and setters for all the data members.
Also add the display function.
Create the object of this class in main method and invoke all the methods.
*/
class ComplexNumber {
    double real,imag;
public:
    ComplexNumber():real(0),imag(0){}
    ComplexNumber(double r,double i):real(r),imag(i){}
    void setReal(double r){real=r;}
    void setImag(double i){imag=i;}
    double getReal(){return real;}
    double getImag(){return imag;}
    void display(){ cout<<real<<" + "<<imag<<"i\n"; }
};

int main() {
    ComplexNumber c1;
    c1.setReal(3.5); c1.setImag(2.5);
    c1.display();
    ComplexNumber c2(5.0,6.0);
    c2.display();
}
