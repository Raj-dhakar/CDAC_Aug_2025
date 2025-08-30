#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack{

    public :
     vector<T> arr;
     int size=0;

     void push(int num){
        arr.push_back(num);
        size++;
     }

     T pop(){
        if(size-1>=0){
            size--;
            int val=arr[size-1];
             arr.pop_back();
            return val;
        }
        cout<<"Cannot Pop from Stack as Stack is Empty\n";
        return T();
     }

     void peek(){
        if(size-1>=0){
            cout<<"Top Element of Stack is: "<<arr[size-1]<<endl;
        }
        else cout<<"Stack is Empty\n";
     }

     void isEmpty(){
        if (size>=0) 
        cout<<"Size is not Empty\n";
        else
         cout<<"Stack is Empty\n";
     }
};

int main(){

    Stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    s1.peek();
    s1.isEmpty();
}