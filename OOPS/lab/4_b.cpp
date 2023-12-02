// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Shape
{
public:
    float area;
    void virtual get_data()
    {
        cout<<"ENTER THE DETAILS:";
    }
    void virtual put_data()
    {
        cout<<"CALCULATED AREAS:";
    }
    void virtual Area()
    {
        cout<<area;
    }
};
class Square:public Shape
{
public:
    float side;
    void  get_data()
    {
        cout<<"\n-------------SQUARE------------\n";
        cout<<"Enter the side of the square:";
        cin>>side;
    }
    void  display()
    {
        cout<<"Area of the square:"<<side*side;
    }
};
class Rectangle:public Shape
{
public:
    float length,breadth;
    void get_data()
    {
        cout<<"\n--------------RECTANGLE-------------\n";
        cout<<"Enter the length of the rectangle:";
        cin>>length;
        cout<<"Enter the breadth of the rectangle:";
        cin>>breadth;
    }
    void calc_area()
    {
        area=length*breadth;
    }
    void display()
    {
        cout<<"Area of the rectangle:"<<area;
    }
};
class Triangle:public Shape
{
public:
    float base,height;
    void get_data()
    {
        cout<<"\n---------------TRIANGLE----------------\n";
        cout<<"Enter the base of the triangle:";
        cin>>base;
        cout<<"Enter the height of the triangle:";
        cin>>height;
    }
    void calc_area()
    {
        area=(0.5*base*height);
    }
    void display()
    {
        cout<<"Area of Triangle:"<<area;
    }
};
class Circle:public Shape
{
public:
    float radius;
    void get_data()
    {
        cout<<"\n-------------------CIRCLE---------------\n";
        cout<<"Enter the radius of the circle:";
        cin>>radius;
    }
    void calc_area()
    {
        area=3.14*radius*radius;
    }
    void display()
    {
        cout<<"Area of circle:"<<area;
    }
};
int main()
{
    Shape *S;
    Rectangle R;
    S=&R;
    R.get_data();
    R.calc_area();
    R.display();
    Circle C;
    S=&C;
    C.get_data();
    C.calc_area();
    C.display();
    Triangle T;
    S=&T;
    T.get_data();
    T.calc_area();
    T.display();
    Square Sq;
    S=&Sq;
    Sq.get_data();
    Sq.display();
}
