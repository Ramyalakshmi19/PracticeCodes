#include<iostream>
using namespace std;
template <typename T>
T max(T &num1, T &num2)
{
    return ((num1>num2)? num1:num2);
}
template <typename T>
T my_swap(T &num1, T &num2)
{
    T temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"AFTER SWAPPING:\n";
    cout<<"NUMBER-1:"<<num1<<endl;
    cout<<"NUMBER-2:"<<num2;

}
int main()
{
    int n1,n2,m;
    cout<<"Enter number 1:";
    cin>>n1;
    cout<<"Enter number 2:";
    cin>>n2;
    m= max(n1,n2);
    cout<<"The maximum of two numbers:"<<m<<endl;
    my_swap(n1,n2);
}