 
 
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
void SumDigit(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        
        while(iNo != 0)
        {
        
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo/10;

            
        }
        printf("%d\n",iSum);
        iSum = 0; 
        Head = Head->next;
    }
    
}


int main()
{
    PNODE Frist = NULL; // poinetr Head
    


    InsertFrist(&Frist, 111);
    InsertFrist(&Frist, 101); // Isnert(60,51)
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 21); //
    InsertFrist(&Frist,11);

    Display(Frist);

    SumDigit(Frist);

    

    

    return 0;
}