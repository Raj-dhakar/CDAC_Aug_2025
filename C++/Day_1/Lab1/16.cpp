#include<iostream>
using namespace std;

/*
16:Write a  program to print all Prime numbers between 1 to n. 
*/

void f16(){

    cout<<"Enter a number \n";

    int n;
    cin>>n;

    bool isPrime[n+1];

    for(int i=0;i<n+1;i++) isPrime[i]=true;

    isPrime[0]=isPrime[1]=false;

    for(int i=2;i*i<n+1;i++){
        if(isPrime[i]){
            for(int j=i*i;j<n+1;j+=i) isPrime[j]=false;
        }
    }

    cout<<" Prime numbers from 1 to "<<n<<" :";
    for(int i=1;i<n+1;i++) if(isPrime[i]) cout<<i<<" ";
}

int main(){

    f16();
}