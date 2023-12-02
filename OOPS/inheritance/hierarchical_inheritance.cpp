#include<iostream>
using namespace std;
class shape
{
    protected:
        int dimension1,dimension2;
        void set_data(int a,int b)
        {
            dimension1=a;
            dimension2=b;
        }
};
class rectangle:public shape 
{
    public:
        void rec_area(int len,int bread)
        {
            set_data(len,bread);
            cout<<"Area of Rectangle:"<<dimension1*dimension2<<endl;
        }

};
class triangle:public shape
{
    public:
        void tri_area(int len,int height)
        {
            set_data(len,height);
            cout<<"Area of Triangle:"<<(0.5*dimension1*dimension2);
        }
};
int main()
{
    int l_rec,l_tri,bread,height;
    cout<<"Enter the length of rectangle:";
    cin>>l_rec;
    cout<<"Enter the breadth of Rectangle:";
    cin>>bread;
    cout<<"Enter the length of Triangle:";
    cin>>l_tri;
    cout<<"Enter the height of Triangle:";
    cin>>height;
    rectangle r1;
    triangle t1;
    r1.rec_area(l_rec,bread);
    t1.tri_area(l_tri,height);
}