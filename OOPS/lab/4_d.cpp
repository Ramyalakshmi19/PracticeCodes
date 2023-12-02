#include<iostream>
using namespace std;
template<class T>
class calculator
{
    private:
        T num1,num2,result;
    public:
        calculator(T n1,T n2)
        {
            num1=n1;
            num2=n2;
        }
        T add()
        {
            return num1+num2;
        }
        T subtract()
        {
            return num1-num2;
        }
        T multiply()
        {
           return num1*num2;
        }
        T divide()
        {
            return num1/num2;
        }
        T display_result()
        {
            cout<<"ADD:"<<add();
            cout<<"\nSUBTRACTION:"<<subtract();
            cout<<"\nMULTIPLICATION:"<<multiply();
            cout<<"\nDIVISION:"<<divide();
        }

};
int main()
{
    int n1,n2;
    float f1,f2;
    cout<<"----------------INTEGER------------------------\n";
    cout<<"Enter the number-1:";
    cin>>n1;
    cout<<"Enter the number-2:";
    cin>>n2;
    calculator<int>c1(n1,n2);
    c1.display_result();
    cout<<"\n----------------FLOAT------------------------\n";
    cout<<"Enter the number-1:";
    cin>>f1;
    cout<<"Enter the number-2:";
    cin>>f2;
    calculator<float>c2(f1,f2);
    c2.display_result();
}