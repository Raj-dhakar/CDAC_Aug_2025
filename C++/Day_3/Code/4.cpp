#include <bits/stdc++.h>
using namespace std;

/*
Create a class Book with data members as bname, id, author, price.
Write getters and setters for all the data members.
Also add the display function.
Create Default and Parameterized constructors.
Create the object of this class in main method and invoke all the methods.
*/
class Book {
    string bname,author;
    int id;
    double price;
public:
    Book():bname(""),id(0),author(""),price(0){}
    Book(string bn,int i,string a,double p):bname(bn),id(i),author(a),price(p){}
    void setName(string n){bname=n;}
    void setId(int i){id=i;}
    void setAuthor(string a){author=a;}
    void setPrice(double p){price=p;}
    string getName(){return bname;}
    int getId(){return id;}
    string getAuthor(){return author;}
    double getPrice(){return price;}
    void display(){ cout<<bname<<" "<<id<<" "<<author<<" "<<price<<"\n"; }
};

int main() {
    Book b1;
    b1.setName("C++"); b1.setId(101); b1.setAuthor("Bjarne"); b1.setPrice(500);
    b1.display();
    Book b2("Java",102,"James",450);
    b2.display();
}
