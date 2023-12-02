#include<iostream>
using namespace std;
int row1,col1,row2,col2;
void get_data(int arr[100][100]);
void matrix_add(int matrix_A[100][100],int matrix_B[100][100]);
int main()
{
    cout<<"Enter the number of rows and column in the matrix A:";
    cin>>row1>>col1;
    int matrix_A[row1][col1];
    get_data(matrix_A);
    cout<<"Enter the number of rows and column in the matrix B:";
    cin>>row2>>col2;
    int matrix_B[row2][col2];
    get_data(matrix_B);
    matrix_add(matrix_A,matrix_B);
}
void get_data(int arr[100][100])
{
    cout<<"Enter the elements of Array:";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>arr[row1][col1];
        }
    }
}
void matrix_add(int matrix_A[100][100],int matrix_B[100][100])
{
    int matrix_C[m][n];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            matrix_C[i][j]=matrix_A[i][j]+matrix_C[i][j];
            cout<< matrix_C[i][j]<<"  ";
        }
        cout<<endl;
    }
}
