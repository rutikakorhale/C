// linaer linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFrist(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //1

    newn->data = no;                   //2
    newn->next = NULL;

    if(*Head == NULL)               //3
    {
         *Head = newn; //4
    }
    else
    {
        newn->next = *Head;  // 5
        *Head = newn;         //6
    }

}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next=newn;
    }

}
void Display(PNODE Head)
{
    printf("Elements Of Linked List are\n");
    while(Head != NULL)
    {
        printf("| %d |-> ",Head->data);
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while (Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
    
}
int main()
{
    PNODE Frist = NULL; // value 1st data chi 
    int iRet = 0;

    InsertLast(&Frist,11);
    InsertLast(&Frist,21);
    InsertLast(&Frist,51);
    InsertLast(&Frist,101);

    Display(Frist);
    iRet = Count(Frist);
    printf("Number of Nodes are:%d\n",iRet);

    InsertFrist(&Frist,10);
    InsertFrist(&Frist,20);

    Display(Frist);

    iRet =  Count(Frist);
    printf("NUmber of Nodes are:%d\n",iRet);
    return 0;
}
