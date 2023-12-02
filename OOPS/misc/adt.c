#include<stdio.h>
struct arrADT{
    int arr[100];
    int size;
};
int i;
void create(struct arrADT *t,int *x,int s)
{
    t->size=s;
    for(i=0;i<t->size;i++)
    {
         t->arr[i]=x[i];
    }  
}
void display(struct arrADT *t)
{
    printf("ARRAY ELEMENTS\n");
    for(i=0;i<t->size;i++)
    {
        printf("%d\n",t->arr[i]);
    }
}
void delete(struct arrADT *t,int p)
{
    for(i=p;i<t->size;i++)
    {
        t->arr[i]=t->arr[i+1];
    }
    t->size=t->size-1;
    printf("AFTER DELETION\n");
    for(i=0;i<(t->size);i++)
    {
        printf("%d\n",t->arr[i]);
    }
}
void insertAtEvery(struct arrADT *t,int data)
{
    int n=t->size;
    t->size=t->size*2;
    printf("ARRAY ELEMENTS AFTER INSERTING\n");
    for(i=t->size;i>=0;i+2)
    {
        t->arr[n+1]=t->arr[n];
        t->arr[i]=data;
    }
    
}
int search(struct arrADT *t,int key)
{
    int count =0;
    for(i=0;i<t->size;i++)
    {
        if(t->arr[i]==key)
        {
            count++;
            if (count==2)
            {
                return i;
            }
        }
        else
        {
            continue;
        }
    }
    return -1;
}