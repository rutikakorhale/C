// Sequence This File Important...
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

}NODE, *PNODE, **PPNODE;
void InsertFrist(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL)) 
    {
         *Head = newn;
         *Tail = newn; //#
    }     
    else             
    {
        newn->next = *Head;
        *Head = newn;      
    }
     (*Tail)->next = *Head;    //#       
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
         *Head = newn;
         *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        (*Tail) = (*Tail)->next; 
    }
    (*Tail)->next = *Head;

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
        
    }


}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

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
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;

    }    

}
void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("|%d|->",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
        printf("\n"); 
        
    } 
    else
    {
        printf("Linked List is Empty\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCount++;
            Head = Head->next;
        } while(Head != Tail->next);
        return iCount;
        
    }
    else
    {
        return 0;
    }
}
void InsetAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int ilength = 0;
    PNODE temp = *Head;
    int iCnt = 0;

    PNODE newn = NULL;

    ilength = Count(*Head,*Tail);

    if((iPos < 1)||(iPos > ilength +1))
    {
       printf("Invalid Input\n");
       return;
    }

    if(iPos == 1)
    {
        InsertFrist(Head,Tail,no);
    }
    else if(iPos == ilength+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next= NULL;

        newn->next= temp->next;
        temp->next = newn;
    }
}
void deleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int ilength =  0;
    PNODE temp = *Head;
    int iCnt = 0;

    PNODE tempX = NULL;
    ilength = Count(*Head,*Tail);

    if((iPos < 1)||(iPos > ilength))
    {
       printf("Invalid Input\n");
       return;
    }
    if(iPos == 1)
    {
        DeleteFrist(Head,Tail);
    }
    else if(iPos == ilength)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;
        temp->next = temp->next->next;
        free(tempX);
    }


}


int main()
{
    PNODE Frist = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFrist(&Frist,&Last,51);
    InsertFrist(&Frist,&Last,21);
    InsertFrist(&Frist,&Last,11);

    InsertLast(&Frist,&Last,101);
    InsertLast(&Frist,&Last,111);
    InsertLast(&Frist,&Last,121);

    Display(Frist,Last);
    iRet = Count(Frist,Last);
    printf("Number Of Node Are:%d\n",iRet);

    InsetAtPos(&Frist,&Last,55,4);

    Display(Frist,Last);
    iRet = Count(Frist,Last);

    printf("Number Of Node are:%d\n",iRet);

    deleteAtPos(&Frist,&Last,4);
    Display(Frist,Last);
    iRet = Count(Frist,Last);

    printf("Number Of Node are:%d\n",iRet);

    DeleteFrist(&Frist,&Last);
    DeleteLast(&Frist,&Last);

    Display(Frist,Last);
    iRet = Count(Frist,Last);

    printf("Number Of Node are:%d\n",iRet);


    return 0;
}