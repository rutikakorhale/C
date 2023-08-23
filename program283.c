 
 
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

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;
    newn->data= no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int ilength = 0;

    ilength = Count(*Head); 
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    // Filter
    if((iPos < 1 )||(iPos > ilength  +1))
    {      
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1) 
    {
        InsertFrist(Head,no);

    }
    else if((iPos == ilength+1))
    {
       InsertLast(Head,no);
    }
    else
    {
       newn = (PNODE)malloc(sizeof(NODE));

       newn->data = no;
       newn->next = NULL;

       for(iCnt = 1; iCnt < iPos-1; iCnt++)
       {
         temp = temp ->next;
       }

       newn->next = temp->next;
       temp->next = newn;
    }
}


void DisplayR(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
        DisplayR(Head);

    }
}

int CountR(PNODE Head)
{
    static int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
        DisplayR(Head);
    }
    return iCnt;

}

int main()
{
    PNODE Frist = NULL; //
    
    InsertFrist(&Frist, 11);
    InsertFrist(&Frist, 21); // 
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 101); //



    return 0;
}