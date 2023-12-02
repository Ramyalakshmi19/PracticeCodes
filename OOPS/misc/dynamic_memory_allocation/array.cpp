#include<iostream>
using namespace std;
int main()    //dynamic memory allocation for an array
{ 
    int num;
    cout<<"Enter the number of elements:";
    cin>>num;
    int* ptr_array=new int[num];
    cout<<"Enter the array elements:";
    for(int i=0;i<num;i++)
    {
        cin>>ptr_array[i];  
    }
    cout<<"Entered elements are:";
    for(int i=0;i<num;i++)
    {
        cout<<*(ptr_array+i)<<endl;
    }
    delete[] ptr_array;
}