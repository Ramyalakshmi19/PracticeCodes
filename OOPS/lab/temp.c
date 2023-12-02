#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "adt.h"

int main() {
    struct node *h,*v,*c;
    h = (struct node *)malloc(sizeof(struct node));
    v= (struct node *)malloc(sizeof(struct node));
    c= (struct node *)malloc(sizeof(struct node));
    insertFront(h,'A');
    insertFront(h,'B');
    insertFront(h,'C');
    insertFront(h,'D');
    insertFront(h,'E');
	printf("\nBEFORE SWAP:\n");
    display(h);
    swap(h,2);
    printf("\nAFTER SWAP of 2 nd elemnt\n");
    display(h);
}