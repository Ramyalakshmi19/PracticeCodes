#include<iostream>
using namespace std;
bool isleapyear(int y)
{
    if (y%100!=0 && y%4==0 || y%400==0) 
    {
        return true;
    } 
    else
    {
        return false;
    }
}
int main()
{
    if(isleapyear(1700))
        cout<<"Leap";
}