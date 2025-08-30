#include <bits/stdc++.h>
using namespace std;

/*
Create a class Person with data members as name, age, city.
Write getters and setters for all the data members.
Also add the display function.
Create Default and Parameterized constructors.
Create the object of this class in main method and invoke all the methods.
*/
class Person {
    string name, city;
    int age;
public:
    Person():name(""),city(""),age(0){}
    Person(string n,int a,string c):name(n),age(a),city(c){}
    void setName(string n){name=n;}
    void setAge(int a){age=a;}
    void setCity(string c){city=c;}
    string getName(){return name;}
    int getAge(){return age;}
    string getCity(){return city;}
    void display(){ cout<<name<<" "<<age<<" "<<city<<"\n"; }
};

int main() {
    Person p1;
    p1.setName("Raj"); p1.setAge(22); p1.setCity("Pune");
    p1.display();
    Person p2("Divyansh",23,"Gwalior");
    p2.display();
}
