#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

int main()
{
  struct arrADT *ptr;
  ptr=(struct arrADT *)malloc(sizeof(struct arrADT));
  int x[]={1,2,3,4,3,6,3};
  create(ptr,x,7);
  display(ptr);
  del(ptr,1);
  printf("After deletion ");
  display(ptr);
  insertatEvery(ptr,9);
  display(ptr);
  search(ptr,3);
  display(ptr);
 
}
