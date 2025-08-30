#include<iostream>
using namespace std;

template <typename T>
T _max(T &first,T &second){

    return (first>=second)?first:second;
}

int main(){

    int a=2,b=3;
    cout<<"the greate of 2 number :"<<_max(a,b)<<endl;

    double c=2.3,d=3.03;
    cout<<"the greate of 2 number :"<<_max(c,d)<<endl;
    
    char e='a',f='r';
    cout<<"the greate of 2 char :"<<_max(e,f)<<endl;

}