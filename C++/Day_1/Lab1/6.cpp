#include<iostream>
using namespace std;

/*6. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
   Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% 
*/
void f6(){

    cout<<"Enter salary\n";

    int salary;
    cin>>salary;

    int tax;

    if(salary<150000) tax=0;
    else if(salary>=150000 && salary<=300000) tax=salary*0.2;
    else tax=salary*0.3;

    cout<<"Tax on salary :"<<tax;
}
int main(){

    f6();
}