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
    int n,i;
    cout<<"\n**********************************************************************";
    cout<<"\n TCS EMPLOYEE INFORMATION MANAGEMENT SYSTEM";
    cout<<"\n**********************************************************************";
    cout<<"\nEnter Employee Information Below:"<<"\n";
    

    cout<<"Enter number of employees: ";
    cin>>n;
    Employee emp[n];
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
        cout<<"\n";
        cout<<"Enter details of next Employee:";
    }
    cout<<"\n";
    cout<<"The entered details are as under:"<<"\n";
    for(i=0;i<n;i++)
    {
        emp[i].calsalary();
        emp[i].showdata();
    }


 
 return 0;
}