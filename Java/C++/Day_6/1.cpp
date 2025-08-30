#include<iostream>
using namespace std;

template <typename T>
void _swap(T &first,T &second){

    T temp=first;
    first=second;
    second=temp;
}

int main(){

    int a=2,b=3;
    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    _swap(a,b);
    cout<<"After Swapping: "<<a<<" "<<b<<endl;

    double c=12.54,d=0.543;
    cout<<"Before Swapping: "<<c<<" "<<d<<endl;
    _swap(c,d);
    cout<<"After Swapping: "<<c<<" "<<d<<endl;

    char e='c',f='r';
    cout<<"Before Swapping: "<<e<<" "<<f<<endl;
    _swap(e,f);
    cout<<"After Swapping: "<<e<<" "<<f<<endl;
    
}