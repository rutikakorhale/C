#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev; //# new line
}NODE, *PNODE,**PPNODE;

int main()
{
    PNODE Frist = NULL;
    return 0;
}