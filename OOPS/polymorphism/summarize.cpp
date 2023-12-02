#include<iostream>
using namespace std;
class shape
{
    public:
        int dimension1,dimension2,area;
        virtual void display()   //virtual function
        {
            cout<<"SHAPES:\n1.RECTANGLE\n2.CIRCLE\n";
        }
};
class rectangle:public shape
{
    public:
        void display()
        {
            cout<<"1.RECTANGLE:\n";
        }
        void disp_area(int length,int breadth)
        {
            dimension1=length;
            dimension2=breadth;
            area=length*breadth;
            cout<<"Area of rectangle:"<<area<<endl;
        }
};
class circle:public shape
{
    public:
        void display()
        {
            cout<<"2.CIRCLE:\n";
        }
        void disp_area(int radius)
        {
            dimension1=radius;
            area=3.14*radius*radius;
            cout<<"Area of Circle:"<<area<<endl;
        }
};
int main()
{
    int length,breadth,radius;
    cout<<"Enter the length of rectangle:";
    cin>>length;
    cout<<"Enter the breadth of rectangl:";
    cin>>breadth;
    cout<<"Enter the radius of circle:";
    cin>>radius;
    shape *s,s1;   //pointer object-can point to any derived class object
    rectangle r;
    circle c;
    s=&s1;
    s->display();  // the method display-overriding(dynamic binding/late binding) --at compile time
    cout<<"----------------------------------\n";
    s=&r;
    s->display();
    r.disp_area(length,breadth);   //the method disp_area- overloading(static binding/early binding) --at runtime
    s=&c;
    s->display();
    c.disp_area(radius); 
}