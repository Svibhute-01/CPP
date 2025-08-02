//WAP to demonstrate default constructor in class car
#include<iostream>
using namespace std;
class Car{
    private:
    string name;
    string color;
    int price;


    public:
    Car()
    {
        cout<<"The name of the car is:";
        cin>>name;
        cout<<"The color of the car is:";
        cin>>color;
        cout<<"The price of the car is:";
        cin>>price;
    }
};


int main()
{
    Car c;
    return 0;
}