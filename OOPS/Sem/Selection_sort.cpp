#include<iostream>
using namespace std;
int main()
{
    int n,min_index,temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ELEMENT-"<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            //find the min element in unsorted list
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
            else
            {
                continue;
            }
        }
        //swap the min element and the first element in unsorted list
        if(min_index!=i)
        {
            temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        } 
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}