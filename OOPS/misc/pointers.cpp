#include<iostream>
using namespace std;
int main()
{
    int num_array[2][3]={{1,2,3},{4,5,6}};
    int (*ptr)[2][3];
    ptr=&num_array;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ptr[i][j]<<num_array[i][j];
            cout<<endl;
        }
    }
}