#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int id;
    string phone;
    public:


void updatephone(string p){
    phone=p;
    cout<<"\nPhone of employee is:"<<phone;
}
void getid(int i){
    id=i;
    cout<<"\nId of employee is:"<<id;
}
void get_name(string n){
    name=n;
    cout<<"\nThe name of employee is:"<<name;}
};
class Developer:public Employee{
    private:
    string gitHubLink;
    public:
    void updatelink(){
        cout<<"\nEnter new github link:";
        cin>>gitHubLink;
        cout<<"\nNew github link:"<<gitHubLink;
    }
};
class Designer:public Employee{
    private:
    string dribbleLink;
    public:
    void updateLink(){
        cout<<"\nEnter new  dribble link:";
        cin>>dribbleLink;
        cout<<"\nNew dribble link is:"<<dribbleLink;
    }
};
int main(){
    Developer d;
    d.get_name("snehal");
    d.updatephone("9021807527");
    d.getid(1234567);
    d.updatelink();
    Designer r;
    r.get_name("snehal");
    r.updatephone("9021807527");
    r.getid(1234567);
    r.updateLink();
    return 0;


}