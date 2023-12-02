#include<iostream>
using namespace std;
int main()
{
    int n,search,i=0,flag=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    int low=0,high=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<"ELEMENT-"<<i+1<<":";
        cin>>arr[i];
    } // works only if the array is sorted
    cout<<"Enter the search element:";
    cin>>search;
    while(i<n)
    {
        i++;
        int mid=(low+high)/2;
        if(search==arr[mid])
        {
            cout<<"Element found at position "<<mid+1<<endl;
            flag+=1;
            break;
        }
        else if(search<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       
    }
    if(flag==0)
    {
        cout<<"Element not found\n";
    }
}