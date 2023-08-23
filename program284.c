 
 
// linked list (Data Structure)
#include <stdio.h> // printf scanf
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
    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node
    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL) // LL is Empty
    {
        *Head = newn;
    }
    else // LL Contain atleast one Node
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
    while(Head != NULL)
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

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
        DisplayR(Head->next);
    }
    return iCnt;

}

int main()
{
    PNODE Frist = NULL; 
    int iRet = 0;
    
    InsertFrist(&Frist, 11);
    InsertFrist(&Frist, 21); 
    InsertFrist(&Frist, 51); 
    InsertFrist(&Frist, 101); 
    
    DisplayR(Frist);
    printf("Number Of Elemnts are \n %d\n",CountR(Frist));
    
    return 0;
}