#include<iostream>
using namespace std;
class Customer{
    private:
    string name,address;
    int phone;
    public:
    void get_name(){
        cout<<"Enter name of customer:";
        cin>>name;
        cout<<"\nName of customer is:"<<name;

    }
    void get_address(){
        cout<<"\nEnter address of employee:";
        cin>>address;
        cout<<"\nAddress of customer is:"<<address;
    }
};
class Commercial:public Customer{
    private:
    string taxid;
    public:
    void privatetaxid(){
        cout<<"\nCustomer tax id is:";
        cin>>taxid;
        cout<<"\nCustomer tax id is:"<<taxid;
    }
};
class Regular:public Customer{
    private:
    string ssa;
    public:
    Regular()
    {
        cout<<"\nthis is private customer.";
    }
};
int main(){
    Commercial c;
    c.get_name();
    c.get_address();
    c.privatetaxid();
    Regular r;
    r.get_address();
    r.get_name();
    return 0;
}