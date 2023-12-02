#include<iostream>
using namespace std;
class add_complex
{
    private:
        int real,img;
    public:
        void get_data()
        {
            cout<<"Real part:";
            cin>>real;
            cout<<"Imaginary part:";
            cin>>img;
        }
        add_complex operator +(const add_complex &b)
        {
            add_complex res;
            res.real=real+b.real;
            res.img=img+b.img;
            return res;
        }
        void display()
        {
            if(img>0)
                cout<<"The sum of complex numbers is "<<real<<"+"<<img<<"i";
            else
            cout<<"The sum of complex numbers is "<<real<<"-"<<img<<"i";
        }
};
int main()
{
    add_complex c1,c2,c3;
    cout<<"ENTER THE FIRST COMPLEX NUMBER:"<<endl;
    c1.get_data();
    cout<<"ENTER THE SECOND COMPLEX NUMBER:"<<endl;
    c2.get_data();
    c3=c1+c2;
    c3.display();


}