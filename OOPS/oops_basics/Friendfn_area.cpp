#include<iostream>  // find area of a rectangle
using namespace std;
class rectangle
{
    private:
        float length,breadth,area;
    public:
        friend float display_area(rectangle);  // can be declared under any access modifier
        rectangle(float l,float b)
        {
            length=l;
            breadth=b;
        }
};
float display_area(rectangle R1)
{
    return R1.length*R1.breadth;   // dot operator is reqd to access the data members of class
}
int main()
{
    float l,b;
    cout<<"Enter the Length of the rectangle:";
    cin>>l;
    cout<<"Enter the breadth of the rectangle:";
    cin>>b;
    rectangle R1(l,b);
    cout<<"Area of rectangle: "<<display_area(R1); //pass object as an argument 
    // Dot operator is not used
}