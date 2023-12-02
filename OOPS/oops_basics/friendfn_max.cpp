#include<iostream>
using namespace std;
class Number1
{  
    public:
        int a;
        Number1(int Num1)
        {
            a=Num1;
        }
        friend void find_max(Number1);
};
class Number2
{
    public:
        int b;
        void setdata(int Num2)
        {
            b=Num2;
        }
        friend void find_max(Number2);
};
void find_max(Number1 N1, Number2 N2)
{
   if(N1.a>N2.b)
   {
    cout<<"NUMBER-1 is greater";
   }
   else{
    cout<<"NUMBER-2 is greater";
   }
}
int main()
{
    int x,y;
    cout<<"Enter the Number-1:";
    cin>>x;
    cout<<"Enter the Number-2:";
    cin>>y;
    Number1 N1(x);
    Number2 N2;
    N2.setdata(y);
    find_max(N1,N2);


}