#include <bits/stdc++.h>
using namespace std;

/*
Consider that payroll software needs to be developed for computerization of operations of an ABC organization.
The organization has employees.

Construct a class Employee with members:
 Employee Id (int)
 Employee Name (string)
 Basic Salary (double)
 HRA = 50% of Basic Salary
 Medical = 1000
 PF = 12% of Basic Salary
 PT = 200
 Gross Salary = Basic Salary + HRA + Medical
 Net Salary = Gross Salary – (PT + PF)

Write methods to display the details of an employee and calculate the gross and net salary.
Create Object of employee class and assign values and display Details.
*/
class Employee {
    int id;
    string name;
    double basic, hra, medical, pf, pt, gross, net;
public:
    Employee():id(0),name(""),basic(0),hra(0),medical(1000),pf(0),pt(200),gross(0),net(0){}
    Employee(int i,string n,double b):id(i),name(n),basic(b),medical(1000),pt(200){
        hra=0.5*basic;
        pf=0.12*basic;
        gross=basic+hra+medical;
        net=gross-(pt+pf);
    }
    void display(){
        cout<<"ID: "<<id<<" Name: "<<name<<"\n";
        cout<<"Basic: "<<basic<<" HRA: "<<hra<<" Medical: "<<medical<<"\n";
        cout<<"PF: "<<pf<<" PT: "<<pt<<"\n";
        cout<<"Gross: "<<gross<<" Net: "<<net<<"\n";
    }
};

int main(){
    Employee e1(201,"Divyansh",50000);
    e1.display();
}
