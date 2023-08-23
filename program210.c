 
 
#include <stdio.h> 
#include <stdlib.h>

struct Node 
{
    int data;       
    struct Node *next; 
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE; 

void Display(PNODE Head) 
{
    printf("Elements Of Linked List Are:\n");
    while (Head != NULL)
    {
        printf("|%d| ->", Head->data);
        Head = Head->next;
    }
    printf("NUll\n");
}


void InsertFrist(PPNODE Head, int no) 
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int Maximum(PNODE Head)
{
    int iMax = Head->data;

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}


int main()
{
    PNODE Frist = NULL; // poinetr Head
    int iRet = 0;


    InsertFrist(&Frist, 111);
    InsertFrist(&Frist, 101); // Isnert(60,51)
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 21); //
    InsertFrist(&Frist,11);

    Display(Frist);

    iRet = Maximum(Frist);
    printf("Largest Elements Is:%d\n",iRet);
    return 0;
}