#include<iostream>
using namespace std;
class increment
{
    public:
        int num;
        void set_data(int a)
        {
            num=a;
        }
        increment operator ++()  //doesn't require any parameter
        {
            increment result;
            result.num=++num;
            return result;
        }

};
int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    increment i1,i2;
    i1.set_data(number);
    i2=++i1;    //pre-increment 
    cout<<"The incremented value is:"<<i2.num;


}