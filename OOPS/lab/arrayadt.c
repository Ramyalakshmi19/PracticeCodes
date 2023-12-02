#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "adt.h"

void main(){
  int a[10]={1,2,3,8,5,6};
  struct stack *s;
  s=(struct stack *)malloc(sizeof(struct stack));
  createstack(s,1);
  findlarge(a,s);
  printf("The large number is ");
  display(s);
}