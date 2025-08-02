#include<iostream>
using namespace std;
class Rectangle
{
public: 
int length,breadth;

int getlength()
      {
        cout<<"Length of a rectangle is:";
        cin>>length;
      }

 int getbreadth(){
     cout<<"Enter the breadth of rectangle:";
     cin>>breadth;
 }   
 int area(){
    cout<<"Area of rectangle is:"<<length*breadth;
 }  
 int perimeter(){
    cout<<"\nPerimeter of rectangle is:"<< 2*(length+breadth);
 }



};
int main(){

Rectangle r;
r.getlength();
r.getbreadth();
r.area();
r.perimeter();
return 0;
}