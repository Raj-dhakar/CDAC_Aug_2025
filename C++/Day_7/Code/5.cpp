/*
Assignment 5:
File IO application
1:Write file: accept data from user and store in file
2:Read file: display line by line
3:Copy data from one file into another
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string filename1="file1.txt",filename2="file2.txt", line;

    do {
        cout<<"\nMenu:1.Write 2.Read 3.Copy 4.Exit\n";
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1: {
                ofstream fout(filename1);
                cout<<"Enter text (end with ~):\n";
                while(true){
                    getline(cin,line);
                    if(line=="~") break;
                    fout<<line<<endl;
                }
                fout.close();
                break;
            }
            case 2: {
                ifstream fin(filename1);
                while(getline(fin,line)) cout<<line<<endl;
                fin.close();
                break;
            }
            case 3: {
                ifstream fin(filename1);
                ofstream fout(filename2);
                while(getline(fin,line)) fout<<line<<endl;
                fin.close(); fout.close();
                cout<<"Copied"<<endl;
                break;
            }
        }
    }while(choice!=4);
    return 0;
}
