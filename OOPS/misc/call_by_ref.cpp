#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int num1,num2;
    register int num3;
    num3=10;
    cout<<(&num3);
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    swap(num1,num2);
    cout<<"The first and second number:"<<num1<<" "<<num2;

}