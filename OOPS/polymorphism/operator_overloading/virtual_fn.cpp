#include<iostream>
using namespace std;
class base
{
    public:
        virtual void display()              
        {
            cout<<"Base class\n";
        }
};
class derived:public base
{
    public:
        void display()
        {
            cout<<"Derived class\n";
        }
};
int main()
{
    base *b1,b2;
    derived d1;
    b1=&b2;
    b1->display();
    b1=&d1;
    b1->display();    //when used without virtual keyword displays "Base class"
    //pointer obj b1 cannot access derived class methods without virtual fn
}