#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{

}
int main()
{
    int n,temp,flag;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
//input the array
    for(int i=0;i<n;i++)
    {
        cout<<"ELEMENT-"<<i+1<<":";
        cin>>arr[i];
    }
//bubble sorting   
    for(int i=0;i<(n-1);i++)
    {
        flag=0;
        for(int j=0;j<(n-1)-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag+=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
//print the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}