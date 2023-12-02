#include<iostream>
using namespace std;
void increment()
{
    static int i=1;
    int j=1;
    i+=1;
    j+=1;
    cout<<"Value of i and j is"<<j<<" "<<i<<endl;
}
int main()
{
    for(int i=1;i<=3;i++)
    {
        increment();
    }
}