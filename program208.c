#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev; 
}NODE, *PNODE,**PPNODE;

void Display(PNODE Head)
{
    printf("Element Of Linked List Are\n");
    printf("NULL <=>");
    while(Head != NULL)
    {
        printf("| %d |<=>",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");

}
int Count(PNODE Head)
{
   int iCount = 0;
   while(Head != NULL)
   {
      iCount++;
      Head = Head->next;
   }
   return iCount;
}

void InsertFrist(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next  = NULL;
    newn->prev = NULL; 

    if(*Head == NULL)  
    {
       *Head = newn;
    }
    else         
    {
         (*Head)->prev = newn;
         newn->next = *Head; 
         *Head = newn;
        

    }

}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL; 

    if(*Head == NULL) 
    {
       *Head = newn;
    }
    else         
    {
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newn;   
        newn->prev = temp;  
         
    }     

}
void DeleteFrist(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL) 
    {
        return;
    }
    else if((*Head)->next == NULL) 
    {
        free(*Head);
        *Head = NULL;

    }
    else                  
    {
        *Head = (*Head)->next;
        free((*Head)->prev); //#
        (*Head)->prev = NULL; //#

    }


}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    
    if(*Head == NULL) 
    {
        return;
    }
    else if((*Head)->next == NULL) 
    {   free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL) // type 3
        {
          temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }



}
void InserAtPos(PPNODE Head, int no , int iPos)
{
    int ilength = 0;
    ilength = Count(*Head);
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    if((iPos < 1)||(iPos > ilength+1))
    {
        printf("Invalid Input\n");
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
        for(iCnt =1; iCnt < iPos-1; iCnt++)
        {
            temp = temp ->next;
        }
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        
    }

}
void DeleteAtPos(PPNODE Head,int iPos)
{   
    int ilength = 0;
    ilength = Count(*Head);
    int iCnt = 0;
    PNODE temp = *Head;

    if((iPos < 1)||(iPos > ilength))
    {
        printf("Invalid Input\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFrist(Head);
    }
    else if((iPos == ilength))
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 0; iCnt < iPos; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);  //#
        temp->next->prev = temp; //#
    }


}

int main()
{
    PNODE Frist = NULL;
    int iRet = 0;

    InsertFrist(&Frist,101);
    InsertFrist(&Frist,51);
    InsertFrist(&Frist,21);
    InsertFrist(&Frist,11);

    iRet = Count(Frist);
    printf("Number Of Element Are %d\n",iRet);
    Display(Frist);

    InsertLast(&Frist,111);
    InsertLast(&Frist,121);

    iRet = Count(Frist);
    printf("Number Of Nodes%d\n",iRet);
    Display(Frist);

    InserAtPos(&Frist,55,4);
    iRet = Count(Frist);
    printf("Number Of Node %d\n",iRet);
    Display(Frist);

    DeleteAtPos(&Frist,4);
    iRet = Count(Frist);
    printf("Number Of Count is%d\n",iRet);
    Display(Frist);

    DeleteFrist(&Frist);
    DeleteLast(&Frist);

    iRet = Count(Frist);
    printf("Number Of Element Are%d\n",iRet);
    Display(Frist);

    return 0;
}