#include<iostream>
using namespace std;
void display(int a)
{
    cout<<"ENTERED NUM IS "<<a;
}
void display(float b)
{
    cout<<"ENTERED NUM IS "<<b;
}
int main()
{
    display(10); 
    display(10.2); //ambiguous due to implicit type conversion
    //float is converted to double
}