#include<iostream>
using namespace std;
int main()                 // dynamic memory allocation for variables
{
    int* ptr_int=new int(32);
    string* ptr_string=new string("RAMYA");
    cout<<"Value of ptr_int:"<<ptr_int;
    cout<<"\nValue of *ptr_int:"<<*ptr_int;
    cout<<"\nValue of ptr_string:"<<ptr_string;
    cout<<"\nValue of *ptr_string:"<<*ptr_string;
    delete ptr_int;
    delete ptr_string;
}  