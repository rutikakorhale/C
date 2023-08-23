 

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

int Count(PNODE Head) // no change linked list
{
    int iCount = 0;
    while (Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
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
void InsertAtPos(PPNODE Head, int no, int iPos) // pos sagnychasthi
{
    int ilength = 0;

    ilength = Count(*Head); // calculate the length CountFun Call
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    // Filter
    if((iPos < 1 )||(iPos > ilength  +1))//  iPos -1(-1value,0)||pos no of element 1 ni pudha kiva jasta asla
    {                                    //no of node pudha del asl tr inValid Ahe mahnu +1
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1) // insret 1st
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
         temp = temp ->next;// new node madhya 400 takych
       }

       // Sequnece is imporatnt
       newn->next = temp->next;
       temp->next = newn;
    }
}
void DeleteFrist(PPNODE Head) // delte kartna data dhychi garaj nahi
{
    PNODE temp = *Head;

    if (*Head == NULL) // LL is empty
    {
        return; // fun ch return val void ahe mahnu
    }
    else if ((*Head)->next == NULL) // LL is one node
    {
        free(*Head);
        *Head = NULL; //== nhi its a assinment.
    }
    else // LL contain more than one node
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head) // frist means head
{
    PNODE temp = *Head;
    

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
         free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL) //type 3 LLooooPP
        {
            temp = temp->next;
        }

        free(temp->next); //500 la del kra....... 
        temp->next = NULL; //important Line to avoid segmation facult
    }
}

void DeleteAtPos(PPNODE Head, int iPos) // postion sagyla lagnar ahe delete madhya ipos takla
{
    int ilength = 0;
    ilength = Count(*Head);
    PNODE temp = *Head;
    int iCnt = 0;
    PNODE tempX = NULL;


    if((iPos < 1)||(iPos > ilength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
       DeleteFrist(Head);
    }
    else if(iPos == ilength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1;iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp ->next;
         // sequence impotant
        temp->next = temp->next->next;//imp
        free(tempX);
        
    }
}
int main()
{
    PNODE Frist = NULL; // poinetr Head
    int iRet = 0;

    InsertFrist(&Frist, 11);
    InsertFrist(&Frist, 21); // Isnert(60,51)
    InsertFrist(&Frist, 51); //
    InsertFrist(&Frist, 101); //

    Display(Frist);

    iRet = Count(Frist);
    printf("Number Of Nodes are : %d\n", iRet);

    InsertFrist(&Frist, 10);
    InsertFrist(&Frist, 20);
    Display(Frist);
    iRet = Count(Frist);
    printf("Count Is:%d\n",iRet);

    InsertAtPos(&Frist,25,5); // 25 data 5 POstion

    Display(Frist);

    iRet = Count(Frist);
    printf("Number Of Nodes are:%d\n", iRet);

    DeleteAtPos(&Frist,5);
    Display(Frist);
    iRet = Count(Frist);
    printf("Countis:%d\n",iRet);
    
    DeleteFrist(&Frist); // delte call. 2 vela call kelyvr 2 node jatil
    Display(Frist);

    iRet = Count(Frist);
    printf("Number of Nodes :%d\n", iRet);

    DeleteLast(&Frist);
    Display(Frist);

    iRet = Count(Frist);
    printf("Number of Nodes are:%d\n",iRet);

    return 0;
}