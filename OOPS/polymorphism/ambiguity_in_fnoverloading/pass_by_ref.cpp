#include<iostream>
using namespace std;
void display(int a)
{
    cout<<"ENTERED NUM IS "<<a;
}
void display(int &b)
{
    cout<<"ENTERED NUM IS "<<b;
}
int main()
{
    int num1;
    cout<<"Enter number 1:";
    cin>>num1;
    display(num1);  //ambiguous due to reference variable
}