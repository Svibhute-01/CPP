//WAP to demonstrate copy constructor in student class
#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    float marks;


    public:
    Student(int r,string n,float m)
    {
        rollno=r;
        name=n;
        marks=m;
    }
    Student(Student& obj){
        rollno=obj.rollno;
        name=obj.name;
        marks=obj.marks;

    }
    void details()
    {
        cout<<"\nRoll No. of a student is:"<<rollno;
        cout<<"\nName of a student is:"<<name;
        cout<<"\nMarks of a student in percentage is\n:"<<marks;

    }
};
int main()
{
    Student s(34,"snehal",56.6);
    s.details();
    Student m(s);
    m.details();
    return 0;
}