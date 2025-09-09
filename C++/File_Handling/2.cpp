#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // Writing to the File
    ofstream out;
    out.open("samplea.txt");
    out<<"My Name is :Raj Dhakar";
    out.close();

    // Reding From the File
    ifstream in;
    in.open("sampleb.txt");

    // This will only read a single Word
    string a;
    // in>>a;

    while(in.eof()==0){
        getline(in,a);
        cout<<a<<endl;
    }
}