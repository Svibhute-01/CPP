#include<iostream>
using namespace std;
class Organization{
    private:
    string name,sector;
    
    public:
    Organization(){
        cout<<"Name of organization is";
        cin>>name;
        cout<<"It is belongs to sector Organization";
        cin>>sector;
    }
    void showname1(){
        cout<<"\nName of organization is"<<name;
        cout<<"\nThwe sector is:"<<sector;
    
    }
};
class Employee:public Organization{
    private:
    string name;
    int id;
    public:
    Employee(){
     cout<<"Name of employee is :";
     cin>>name;
     cout<<"ID of employee is:";
     cin>>id;
     
    }
    public:
    void showname(){
        cout<<"\nName of Employee is:"<<name;
        cout<<"\nId of employee is:"<<id;
    }

};
int main(){
    Employee e;
    e.showname1();
    e.showname();
    return 0;
}