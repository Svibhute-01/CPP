#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int id;
    string department;
    int salary;
    public:
    Employee(){
        cout<<"Enter the name of employee:";
        getline(cin,name);
        cout<<"Enter the id of an employee:";
        cin>>id;
        cout<<"Enter the name of Department:"<<endl;
        cin>>department;
    }
    void displayinfo(){
        cout<<"Name of employee is :"<<name<<"\n";
        cout<<"Id of employee is:"<<id<<"\n";
        cout<<"Department of employee is:"<<department<<"\n";
    }
    void calculateSalary(){
       cout<<"Salary of employee is:";
       cin>>salary;
       cout<<"Salary of employee is :"<<salary<<endl;
    }
};
class PartTime:public Employee{
    public:
    PartTime(){
        cout<<"This is part time employee"<<endl;

    }
};
class FullTime: public Employee{
    public:
    FullTime(){
        cout<<"This is full time employee."<<endl;
    }
};
int main(){
    PartTime p;
    p.displayinfo();
    p.calculateSalary();
    FullTime f;
    f.displayinfo();
    f.calculateSalary();
    return 0;
}