#include<iostream>
using namespace std;

template<typename T>
class Calculator{

    public:
      T add(T a,T b){
        return a+b;
      }
      
      T multi(T a,T b){
        return a*b;
      }

      T div(T a,T b){
        if(b==0){
            cout<<"Cannot divide by zero";
            return -1;
        }
        return a/b;
      }

};

int main(){

    Calculator<int> obj1;

    cout<<"Adding 2 Num: "<<obj1.add(1,2)<<endl;
    cout<<"Multiply 2 Num: "<<obj1.multi(1,2)<<endl;
    cout<<"Adding 2 Num: "<<obj1.div(1,2)<<endl;

    Calculator<double> obj2;

    cout<<"Adding 2 Num: "<<obj2.add(1.1,2.2)<<endl;
    cout<<"Multiply 2 Num: "<<obj2.multi(1.1,2.2)<<endl;
    cout<<"Adding 2 Num: "<<obj2.div(1.1,2.2)<<endl;

}