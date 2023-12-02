#include<iostream>
using namespace std;
class A
{
    public:
        int num1;
        void set_data(int a)
        {
            num1=a;
        }

};
class B
{
    public:
        int num2;
        void set_data(int b)
        {
            num2=b;
        }

};
class C:public A,public B  // a class with two parent classes
{
    public:
        int max;
        void display(int x1,int x2)
        {
            A::set_data(x1);
            B::set_data(x2);
            max=(num1>num2)?num1:num2;
            cout<<"The greatest number is "<<max;
        }
};
int main()
{
    int x,y;
    cout<<"Enter Number-1:";
    cin>>x;
    cout<<"Enter Number-2:";
    cin>>y;
    C c;
    c.display(x,y);

}