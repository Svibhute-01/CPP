#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle()
    {cout<<"This is vehicle";}

};
class FlyingObject:public Vehicle{
    public:
    FlyingObject()
    {cout<<"\nThis is flying object.";}
};
class Aeroplane:public FlyingObject{
    public:
    Aeroplane()
    {cout<<"\nThis is Aeroplane.";
    }
};
int main(){
    Aeroplane a;
    return 0;

}