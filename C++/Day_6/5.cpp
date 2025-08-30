#include<iostream>
using namespace std;

template<typename T>

T array_Sum(T arr[],int n){

    T sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];

    return sum;
}

int main(){

    int arr[]={1,2,3,4,5};
    cout<<"sum of int Array "<<array_Sum(arr,5)<<endl;

    double arr1[]={1.1,2.2,3.3,4.4,5.5};
    cout<<"sum of int Array "<<array_Sum(arr1,5)<<endl;
}