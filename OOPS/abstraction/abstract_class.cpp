#include<iostream>
using namespace std;
class shape   //abstract class 
{   // The object for base class cannot be declared(is an interface)
    protected:
        int dimension;
    public:
        void get_data(int a)
        {
            dimension=a;
        }
        virtual void disp_area()=0;   //pure virtual fn- Its implementation is given in derived classes
};
class square:public shape
{
    public:
        void disp_area()
        {
            cout<<"Area of square:"<<(dimension*dimension);
        }
};
class circle:public shape
{
    public:
        void disp_area()
        {
            cout<<"\nArea of circle:"<<(3.14*dimension*dimension);
        }
};
int main()
{
    int side,radius;
    cout<<"Enter the side of sqaure:";
    cin>>side;
    cout<<"Entr the radius of circle:";
    cin>>radius;
    square s1;
    circle c1;
    s1.get_data(side);
    c1.get_data(radius);
    s1.disp_area();
    c1.disp_area();
}
