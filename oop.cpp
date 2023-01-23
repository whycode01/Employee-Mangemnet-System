/*Implement basic concepts of OOP
Name:Gaurav
DIv-4
Date:23/01/2023*/



#include<iostream>
#include<string>
using namespace std;

class Employee{

private:

    string Fname;
    string Lname;
    int empid;
    string city;
    float TA,DA,base,HRA,netsalary;
public:

    void getdata();
    void showdata();
    void calsalary();


};

void Employee::getdata()
{

cout<<"Enter Your Employee Id:"<<" ";
cin>>empid;
cout<<"\n";


cout<<"Enter Your First Name:"<<" ";
cin>>Fname;
cout<<"\n";

cout<<"Enter Your Last Name:"<<" ";
cin>>Lname;
cout<<"\n";

cout<<"Enter Your City:"<<" ";
cin>>city;
cout<<"\n";


cout<<"Enter Your monthly Basic Salary:"<<" ";
cin>>base;
cout<<"\n";
}

void Employee::calsalary()
{
TA=0.2*base;
DA=0.35*base;
HRA=0.25*base;
netsalary=base+TA+DA+HRA;


}

void Employee::showdata(){
    cout<<"Emloyee id is: "<<empid;
    cout<<"\n";
    cout<<"Employee Name is :"<<Fname<<" "<<Lname;
    cout<<"\n";
    cout<<"Employee city is: "<<city;
    cout<<"\n";
    cout<<"Base salary of employee is: "<<base;
    cout<<"\n";
    cout<<"Net salary of Employee is: "<<netsalary;
    cout<<"\n";

}



int main()
{
    cout<<"\n**********************************************************************";
    cout<<"\n TCS EMPLOYEE INFORMATION MANAGEMENT SYSTEM";
    cout<<"\n**********************************************************************";
    cout<<"\nEnter Employee Information Below:"<<"\n";
    

    Employee employee1;
    employee1.getdata();
    employee1.calsalary();
    employee1.showdata();

 
 return 0;
}