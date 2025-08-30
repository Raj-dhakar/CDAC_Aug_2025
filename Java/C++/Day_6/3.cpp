#include<iostream>
using namespace std;

template<typename T>
class Box{

    private:
      T first;

    public: 
     T getValue(){
        return first;
     }

     void setValue(T value){
        first=value;
     }
};

int main(){

    Box<int> obj1;
    obj1.setValue(10);
    cout<<"Get value of Obj1: "<<obj1.getValue()<<endl;

    Box<double> obj2;
    obj2.setValue(12.345);
    cout<<"Get value of Obj2: "<<obj2.getValue()<<endl;
}