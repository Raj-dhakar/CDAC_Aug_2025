#include<iostream>
#include<fstream>
using namespace std;

/*
 The Useful classes to work with files in c++ are
 1. fstreambase
 2. ifstream ->derived for fstreambase
 3. ofstream ->derived for fstreambase

 In order to work withh file you will have to open it 
 1. Using constructor 
 2. using the member function open() of the class
*/

int main(){

    string s="Hello Raj !!";
    string read;

    // opening file using constructor and writing in it 
    ofstream outFile("samplea.txt"); // Writing operation
    outFile<<s;
    outFile.close();

    // opening file using constructor and reading it
    ifstream inFile("sampleb.txt"); // Read Operation

    // inFile>> read; // This will read only single word 
    getline(inFile,read);

    inFile.close();
    

    cout<<read;
    
}