#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"This is animal.";

    }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"\nThis animal is dog.";}
};
class BabyDog:public Dog{
    public:
    BabyDog()
    { cout<<"\nthis is baby dod.";}
};
int main(){
    BabyDog baby;
    return 0;
}