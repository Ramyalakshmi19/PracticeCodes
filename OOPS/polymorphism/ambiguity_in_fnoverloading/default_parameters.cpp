#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"SUM:"<<a+b;
}
void add(int a,int b,int c=10)
{
    cout<<"SUM:"<<a+b+c;
}
int main()
{
    int num1,num2;
    cout<<"ENTER NUM-1:";
    cin>>num1;
    cout<<"ENTER NUM-1:";
    cin>>num1;
    add(num1,num2);   //ambiguous due to default parameter
    
} 