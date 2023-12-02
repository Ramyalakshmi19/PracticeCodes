#include<stdio.h>
#include<conio.h>
int num;
void display(int[][num]);
void get_data();
void get_data()
{
    int sq_matrix[num][num];
    int lower_trimatrix[num][num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("Element-[%d][%d]:",i,j);
            scanf("%d",&sq_matrix[i][j]);
            if(i>j)
                lower_trimatrix[i][j]=0;
            else
                lower_trimatrix[i][j]=sq_matrix[i][j];
        }
    }
    display(lower_trimatrix);
}
void display(int matrix[][num])
{
    printf("The matrix is:\n");
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
            printf("%d  ",matrix[i][j]);
        printf("\n");
    }
}

void main()
{
    printf("Input the size of the square matrix:");
    scanf("%d",&num);
    printf("Input the elements in the first matrix:\n");
    get_data();
}