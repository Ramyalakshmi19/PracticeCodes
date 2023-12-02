#include<iostream>
using namespace std;
class complex_sub
{   
    public:
        int real,img;
        friend complex_sub operator -(complex_sub,complex_sub);
        void get_data()
        {
            cout<<"Enter the real part:";
            cin>>real;
            cout<<"Enter the imaginary part:";
            cin>>img;
        }
};
complex_sub operator - (complex_sub comp1,complex_sub comp2)
{
    complex_sub res;
    res.real=comp1.real-comp2.real;
    res.img=comp1.img-comp2.img;
    return res;
}
int main()
{
    complex_sub c1,c2,c3;
    cout<<"Enter the first complex number:\n";
    c1.get_data();
    cout<<"Enter the second complex number:\n";
    c2.get_data();
    c3=c1-c2;
    if(c3.img>0)
        cout<<"ANS:"<<c3.real<<"+"<<c3.img<<"i";
    else
        cout<<"ANS:"<<c3.real<<c3.img<<"i";

}