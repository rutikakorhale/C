//Circual <=>
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;
void Display(PNODE Head,PNODE Tail)
{
    if((Head != NULL) && (Tail != NULL))
    {
        printf("<=>");
        do
        
        {
            printf("| %d |<=>",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
        printf("\n");
    }
    else
    {
        printf("Linked List Is Empty\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
            iCount++;
            Head = Head->next;
        } while (Head != Tail->next);

        return iCount;
        
    }
    else
    {
        return 0;
    }
}
void InsertFrist(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->next = *Tail; //sequency not imp.

}
void InsertLast(PPNODE Head, PPNODE Tail , int no)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;

    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;

        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;

}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int ilength = Count (*Head,*Tail);
    PNODE temp = *Head;
    PNODE newn = NULL;
    int iCnt = 0;

    if((iPos < 1)||(iPos > ilength +1))
    {
        printf("Invalid Input\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFrist(Head,Tail,no);
    }
    else if((iPos == ilength+1))
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->next = temp;
    }

}
void DeleteFrist(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return;
    }
    else if((*Head == *Tail))
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);

        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }

}
void DeleteLast(PPNODE Head , PPNODE Tail)
{

    if((*Head == NULL)&&(*Tail == NULL))
    {
        return;
    }
    else if ((*Head == *Tail))
    {
        free(*Head);

        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        
        free((*Tail)->next);
        free((*Head)->prev);

        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }

}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int ilength = 0;

    ilength = Count(*Head,*Tail);
    PNODE temp = *Head;
    int iCnt = 0;

    if((iPos < 1)||(iPos > ilength+1))
    {
        printf("Invalid Input\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFrist(Head,Tail);
    }
    else if((iPos == ilength))
    {
       DeleteLast(Head,Tail); 
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp  = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }

}


int main()
{
    PNODE frist = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFrist(&frist,&Last,51);
    InsertFrist(&frist,&Last,21);
    InsertFrist(&frist,&Last,11);

    InsertLast(&frist,&Last,101);
    InsertLast(&frist,&Last,111);
    InsertLast(&frist,&Last,121);

    Display(frist,Last);
    iRet = Count(frist,Last);
    printf("Number Of Linked List Is:%d\n",iRet);

    InsertAtPos(&frist,&Last,55,4);
    Display(frist,Last);
    iRet = Count(frist,Last);
    printf("Number Of Linked List Is:%d\n",iRet);

    DeleteAtPos(&frist,&Last,4);
    Display(frist,Last);
    iRet = Count(frist,Last);
    printf("Number Of Linked List Is:%d\n",iRet);

    DeleteFrist(&frist,&Last);
    DeleteLast(&frist,&Last);

    Display(frist,Last);
    iRet = Count(frist,Last);
    printf("Number Of Linked List Is:%d\n",iRet);

    return 0;
}