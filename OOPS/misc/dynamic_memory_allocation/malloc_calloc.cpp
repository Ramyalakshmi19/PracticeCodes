#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of elements in an array:";
    cin>>num;
    int* ptr_array=(int*) malloc(sizeof(int)*num); //(data type*)malloc(bytes)                                             //
    for(int i=0;i<num;i++)                         //malloc returns void pointer(If insufficient memory-null pointer)
    {
        cin>>ptr_array[i];  //1 way
    }
    for(int i=0;i<num;i++)
    {
        cout<<*(ptr_array+i)<<" ";  //aliter
    }
    free(ptr_array);
    cout<<ptr_array[0];  //does not point anything-garbage value is returned
}