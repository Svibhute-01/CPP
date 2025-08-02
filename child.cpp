#include<iostream>
using namespace std;
class Grandmother{
   public:
   Grandmother()
   {
    cout<<"she is Grandmother";
   }
};
class Mother:public Grandmother{
    public:
    Mother()
    {cout<<"\nshe is mother.";}
};
class Child:public Mother{
    public:
    Child()
    {
        cout<<"\nThis is child";
    }
};
int main(){
    Child c;
    return 0;
}