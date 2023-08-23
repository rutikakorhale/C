 
 
// linked list (Data Structure)
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


void DisplayI(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
    
    }
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
        DisplayR(Head);
    }
}

int CountI(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int CountR(PNODE Head)
{
    static int iCnt = 0;
    if(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
        CountR(Head);
    }
    return iCnt;
}

int main()
{
    PNODE Frist = NULL; // poinetr Head
    
    InsertFrist(&Frist, 11);
    InsertFrist(&Frist, 21); // Isnert(60,51)
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 101); //

   DisplayR(Frist);

   

    return 0;
}