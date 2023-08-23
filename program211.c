 
 
// linked list (Data Structure)
#include <stdio.h> // printf scanf
#include <stdlib.h>

struct Node // strucut
{
    int data;          //  4 byte data mnje iNo
    struct Node *next; // 8 byte
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE; // pointer add

void Display(PNODE Head) // no change in linkedlist
{
    printf("Elements Of Linked List Are:\n");
    while (Head != NULL)
    {
        printf("|%d| ->", Head->data);
        Head = Head->next;
    }
    printf("NUll\n");
}


void InsertFrist(PPNODE Head, int no) // int ino value
{
    PNODE newn = NULL; // Poinetr
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
int Maximun(PNODE Head)
{
    int iMax = Head->data;
    if(Head == NULL)
    {
        return -1;
    }

    iMax = Head->data;

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

    iRet = Maximun(Frist);
    printf("Largets Element Is %d\n",iRet);

    

    

    return 0;
}