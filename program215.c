 
 
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
void ChKperfect(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
           if((iNo % iCnt) == 0)
           {
              iSum = iSum+ iCnt;
           }
        } 
        if(iSum == iNo)
        {
            printf("%d Is Perfect Number\n",iNo);
        }
        iSum = 0;
        Head = Head->next;
        
    }
    
}


int main()
{
    PNODE Frist = NULL; // poinetr Head
    int iRet = 0;


    InsertFrist(&Frist, 111);
    InsertFrist(&Frist, 101); // Isnert(60,51)
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 469); //
    InsertFrist(&Frist,6);

    Display(Frist);

    ChKperfect(Frist);
    printf("perfect Number Is Is:%d\n",iRet);    

    

    

    return 0;
}