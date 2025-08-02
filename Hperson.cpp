#include<iostream>
using namespace std;
class Person{
private:
string name,haircolor;
int age;
string language;
public:
void get_details(){
    cout<<" Enter Name of a person is:";
    cin>>name;
    cout<<"Enter age of aperson:";
    cin>>age;
    cout<<"What is color of hair?";
    cin>>haircolor;
    cout<<"Which language does he speak?";
    cin>>language;


}
void put_details(){
    cout<<"\nName of a person is:"<<name;
    cout<<"\nAge of a person is:"<<age;
    cout<<"\nLanguage of aperson is:"<<language;
    cout<<"\nHaircolor of a person is:"<<haircolor;

}
};
class Student:public Person{
    public:
    Student(){
        cout<<"\nThis is student.";
        cout<<"\nSubjects student learn:";
        cout<<"\n maths\n english\n science";

    }
};
class Teacher:public Person{
       public:
    Teacher(){
        cout<<"\n\n\nHe is teacher";
        cout<<"\nThe subjects he teachs";
        cout<<"\nMaths\nScience\nGeography";

       }

       
};
int main(){
    Student s;
    s.get_details();
    s.put_details();
    Teacher t;
    t.get_details();
    t.put_details();
    return 0;
}