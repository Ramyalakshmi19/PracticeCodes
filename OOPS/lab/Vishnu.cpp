#include<iostream>
#include<fstream>
using namespace std;
class Complex
{
    public:
    float real;
    float img;
    void data()
    {
        ofstream file;
        file.open("Vishnu.txt",ios::app);
        cout<<"Enter the real part:";
        cin>>real;
        cout<<"Enter the imaginary part:";
        cin>>img;
        if(img>0)
            file<<real<<"+"<<img<<"j"<<endl;
        else
           file<<real<<img<<"j"<<endl;
    }
    Complex operator +(Complex obj)
    {
        Complex add;
        add.real=real+obj.real;
        add.img=img+obj.img;
        return add;
    }
    Complex operator -(Complex obj)
    {
        Complex sub;
        sub.real=real-obj.real;
        sub.img=img-obj.img;
        return sub;
    }
    void data(Complex a,Complex b )
    {
        cout<<"REAL PART:"<<real<<endl;
        cout<<"IMAGINARY PART:"<<img;
    }
};
int main()
{
    Complex c1,c2,c3;
    string s;
    cout<<"-------------------COMPLEX NUMBER-1----------------\n";
    c1.data();
    cout<<"-------------------COMPLEX NUMBER-2----------------\n";
    c2.data();
    c3=c1+c2;
    ifstream file;
    file.open("Vishnu.txt");
    cout<<"\n-----------DATA ENTERED-------------\n";
    while (getline(file,s))
    {
        cout<<s<<endl;
    }
    cout<<"\nOUTPUT:\n"<<endl;
    cout<<"ADDITION\n";
    c3.data(c1,c2);
    c3=c1-c2;
    cout<<"\n\nSUBTRACTION\n";
    c3.data(c1,c2);
}