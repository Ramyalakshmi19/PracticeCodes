#include<iostream>
using namespace std;
int main()
{
    int n,search,flag=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ELEMENT-"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Enter an element to search:";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"The element is found at position"<<i+1;
            flag+=1;
        }
        else{
            continue;
        }
    }
    if(flag==0)
    {
        cout<<"Element not found\n";
    }
}