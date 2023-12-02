#include<iostream>
using namespace std;
int main()
{
    int temp[1][2];
    int arr[]={4,2,2,8,3,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr_f[5][2]={{4,1},{2,2},{8,1},{3,3},{1,1}};
    int n_f=sizeof(arr_f)/sizeof(arr_f[0]);
    for(int i=0;i<n_f-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr_f[j][1]<=arr_f[j+1][1])
            {
                temp[0][0]=arr_f[j][0];
                temp[0][1]=arr_f[j][1];
                arr_f[j][0]=arr_f[j+1][0];
                arr_f[j][1]=arr_f[j+1][1];
                arr_f[j+1][0]=temp[0][0];
                arr_f[j+1][1]=temp[0][1];

            }
        }
    }
    for(int i=0;i<n_f;i++)
    {
        cout<<arr_f[i][1]<<" ";
    }
}