#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    float marks;

    public:
    void inputdetails(){
        cout<<"Enter roll no. of student:";
        cin>>rollno;
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter the marks of student in percentage:";
        cin>>marks;

    }
    void displaydetails(){
        cout<<"Roll No. of Student is:"<<rollno;
        cout<<"\nName of student is:"<<name;
        cout<<"\naMarks of a student in percentage:"<<marks;

    }



};
int main(){
    Student obj1;
    obj1.inputdetails();
    obj1.displaydetails();
    return 0;
}