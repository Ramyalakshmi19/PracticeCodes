#include<iostream>
using namespace std;
class employee
{
    public:
        int p_amount;
        int num_of_years;
        int rate;
        employee(int set_principle,int set_num,int set_rate)
        {
            p_amount=set_principle;
            num_of_years=set_num;
            rate=set_rate;
        }
};
class simple_interest:public employee   //derived class
{
    public:
        simple_interest(int p,int n,int r):employee(p,n,r )   //call parent class constructor
        {
            cout<<"SIMPLE INTEREST:"<<((p_amount*num_of_years*rate)/100);
        }
};
int main()
{
    int p,n,r;
    cout<<"Enter the principle amount:";
    cin>>p;
    cout<<"Enter the number of years:";
    cin>>n;
    cout<<"Enter the rate of interest:";
    cin>>r;
    simple_interest s1(p,n,r);
}
