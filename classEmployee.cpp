#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    string name;
    int salary;

    public:
    Employee(string n,int s){
        name=n;
        salary=s;
    }
    
    void displaydetails(){
        cout<<"Name of Employee is:"<<name;
        cout<<"\nSalary of Employee is:"<<salary;
    }


};
int main(){
    Employee e("snehal",2000);
   
    e.displaydetails();
    return 0;
}