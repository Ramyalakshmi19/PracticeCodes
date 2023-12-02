#include<iostream>
using namespace std;
int n;
void get_input(int *arr);
int find_min(int *arr);
int main()
{
    cout<<"Enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    get_input(arr);
    cout<<"The minimum element of given array is:"<<find_min(arr);
}
void get_input(int num_arr[])
{
    for(int i=0;i<n;i++)
    {
        cin>>num_arr[i];
    }
}
int find_min(int num_arr[])
{
    int min=num_arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>num_arr[i])
        {
            min=num_arr[i];
        }
        else
        {
            continue;
        }
    }
    return min;
}