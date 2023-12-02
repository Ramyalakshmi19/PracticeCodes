#include<iostream>
using namespace std;
class shape
{
    public:
        float radius;
        shape(int r)
        {
            radius=r;
        }
};
class area:public shape
{
    public:
        float area_of_circle;
        area(float r):shape(r)
        {
            cout<<"";
        }
        void set_area()
        {
            area_of_circle=(3.14*radius*radius);
        }
        
};
class display:public area
{
    public:
        float result;
        display(float r,float c):area(r)
        {
            set_area();
            result=(c==1)?(area_of_circle/2):(area_of_circle/4);
            cout<<"Area:"<<result;
        }
};
int main()
{
    float r,count,ch=1;
    cout<<"To find the area of the semicircle or quarter circle that is cut from the circle of the given area\n";
    while(ch==1)
    {
    cout<<"Enter the radius of the circle:";
    cin>>r;
    cout<<"Enter your choice\n1.Semicircle\n2.Quartercircle\n";
    cin>>count;
    display d(r,count);
    cout<<"\nDo you want to continue(1/0)?";
    cin>>ch;
    }



}