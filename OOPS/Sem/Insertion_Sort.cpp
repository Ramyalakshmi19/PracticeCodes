#include<iostream>
using namespace std;
int main()
{
    int n,key,j;
    cout << "Enter the number of elements:";
    cin >> n;
    int arr[n];
    // input the array
    for (int i = 0; i < n; i++)
    {
        cout << "ELEMENT-" << i + 1 << ":";
        cin >> arr[i];
    }
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    //print the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}