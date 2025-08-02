//WAP to demonstrate parameterized constructor
#include<iostream>

using namespace std;
class Employee{
    private:
    string name;
    int salary;

   public: 
    Employee(string n,int s)
    {
        name=n;
        salary=s;
    }
    void displayDetails()
    {
      cout<<"Name of the employee:"<<name;
      cout<<"\nsalary of employee:"<<salary;
    }


};
int main()
{
  Employee e("snehal",690000);
  e.displayDetails();
  return 0;


}