#include<iostream>
using namespace std;
class ElectronicDevice{
    public:
    ElectronicDevice(){cout<<"This is electronic device."; }

};
 
 class Computer:public ElectronicDevice{
    public:
    Computer(){
        cout<<"\nThis electronic device is computer.";
    }
 };
 int main(){
    Computer c;
    return 0;
 }
