#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    public:
        double real,imaginary;
        complex(double rl=0,double img=0)
        {
            real=rl;
            imaginary=img;
        }
        void get_data()
        {
            cout<<"COMPLEX NUMBER-2:\n";
            cout<<"Real part:";
            cin>>real;
            cout<<"Imaginary part:";
            cin>>imaginary; 
        }
        complex operator + (const complex &cmp_2) 
        {
            complex add;
            add.real=real+cmp_2.real;
            add.imaginary=imaginary+cmp_2.imaginary;
            return add;

        }
        complex operator - (const complex &cmp_2) 
        {
            complex sub;
            sub.real=real-cmp_2.real;
            sub.imaginary=imaginary-cmp_2.imaginary;
            return sub;

        }
        complex operator * (const complex &cmp_2) 
        {
            complex mul;
            mul.real=(real*cmp_2.real)+(-1*imaginary*cmp_2.imaginary);
            mul.imaginary=(cmp_2.real*imaginary)-(real*cmp_2.imaginary);
            return mul;

        }
        complex operator / (const complex &cmp_2) 
        {
            complex div;
            float numerator_1=(real*cmp_2.real)+(imaginary*cmp_2.imaginary);
            float numerator_2=(imaginary*cmp_2.real)-(real*cmp_2.imaginary);
            float denominator=(cmp_2.real*cmp_2.real)+(cmp_2.imaginary*cmp_2.imaginary);
            div.real=numerator_1/denominator;
            div.imaginary=numerator_2/denominator;
            return div;

        }
        void display()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"j";
            }
            else
            {
                cout<<real<<imaginary<<"j";
            }
        }
    
        

};
int main()
{
    double r,i;
    cout<<"COMPLEX NUMBER-1\n";
    cout<<"Real part:";
    cin>>r;
    cout<<"Imaginary part:";
    cin>>i;
    cout<<"-----------------------------------------------\n";
    complex c1(r,i);
    complex c2;
    complex c3;
    c2.get_data();
    c3=c1+c2;
    cout<<"-----------------------------------------------"<<"\nADDITION:\t";
    c3.display();
    c3=c1-c2;
    cout<<"\nSUBTRACTION:   "; 
    c3.display();
    c3=c1*c2;
    cout<<"\nMULTIPLICATION:  ";
    c3.display();
    c3=c1/c2;
    cout<<"\nDIVISION:\t";
    c3.display();


}