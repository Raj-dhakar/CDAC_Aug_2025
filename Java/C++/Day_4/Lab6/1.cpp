#include <bits/stdc++.h>
using namespace std;

/*
Fresh business scenario to apply inheritance , polymorphism to emp based organization scenario.
Create Emp based organization structure --- Emp , Mgr , Worker

1.1 Emp state: id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.
Methods: computeNetSalary(){return 0;}

1.2 Mgr state: id,name,basic,deptId , perfBonus
Methods: compute net salary = basic+perfBonus (override)

1.3 Worker state: id,name,basic,deptId,hoursWorked,hourlyRate
Methods:
   compute net salary = basic+(hoursWorked*hourlyRate) (override)
   getHourlyRate() – return hourly rate
*/

class Emp {
protected:
    int id, deptId;
    string name;
    double basicSalary;
public:
    Emp(int i,string n,int d,double b):id(i),name(n),deptId(d),basicSalary(b){}
    virtual double computeNetSalary(){ return 0; }
    virtual void display(){
        cout<<"ID:"<<id<<" Name:"<<name<<" Dept:"<<deptId<<" Basic:"<<basicSalary;
    }
    virtual ~Emp(){}
};

class Mgr:public Emp{
    double perfBonus;
public:
    Mgr(int i,string n,int d,double b,double pb):Emp(i,n,d,b),perfBonus(pb){}
    double computeNetSalary() override{ return basicSalary+perfBonus; }
    void display() override{
        Emp::display();
        cout<<" PerfBonus:"<<perfBonus<<" Net:"<<computeNetSalary()<<"\n";
    }
};

class Worker:public Emp{
    int hoursWorked;
    double hourlyRate;
public:
    Worker(int i,string n,int d,double b,int h,double r):Emp(i,n,d,b),hoursWorked(h),hourlyRate(r){}
    double computeNetSalary() override{ return basicSalary+(hoursWorked*hourlyRate); }
    double getHourlyRate(){ return hourlyRate; }
    void display() override{
        Emp::display();
        cout<<" Hours:"<<hoursWorked<<" Rate:"<<hourlyRate<<" Net:"<<computeNetSalary()<<"\n";
    }
};

int main(){
    vector<Emp*> org;
    while(true){
        cout<<"\n1. Hire Manager\n2. Hire Worker\n3. Display All\n4. Exit\nChoice: ";
        int ch; cin>>ch;
        if(ch==1){
            int id,d; string n; double b,pb;
            cout<<"Enter id name deptId basic perfBonus: ";
            cin>>id>>n>>d>>b>>pb;
            org.push_back(new Mgr(id,n,d,b,pb));
        }
        else if(ch==2){
            int id,d,h; string n; double b,r;
            cout<<"Enter id name deptId basic hours rate: ";
            cin>>id>>n>>d>>b>>h>>r;
            org.push_back(new Worker(id,n,d,b,h,r));
        }
        else if(ch==3){
            for(auto e:org) e->display();
        }
        else break;
    }
    for(auto e:org) delete e;
}
