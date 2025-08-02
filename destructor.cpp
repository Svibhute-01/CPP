//WAp to demonstrate constructor and destructor in same program
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
   ~Employee()
   {
    cout<<"\nDestructor is called";
   }

};
int main()
{
  Employee e("snehal",690000);
  e.displayDetails();
  return 0;


}