
//BST  Recursion
#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int data;
    struct Node *Lchild;
    struct Node *Rchild;
}NODE, *PNODE,  **PPNODE;

void Insert(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head; //adreess 100

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->Lchild = NULL;
    newn->Rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
           if(No == temp->data)
           {
              printf("Dupilcate Element : Unable to Insert\n");
              free(newn);
              break;
           }
           else if(No > temp->data)
           {
              if(temp->Rchild == NULL)
              {
                  temp->Rchild = newn;
                  break;
              }
              temp = temp->Rchild;             
           }
           else if(No < temp->data)
           {
              if(temp->Lchild == NULL)
              {
                 temp->Lchild = newn;
                 break;
              }
              temp = temp->Lchild;              
           }
        }
    }
}

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Display(Head->Lchild);
        Display(Head->Rchild);
    }
}
int main()
{
    PNODE Frist = NULL; 

    Insert(&Frist,21);
    Insert(&Frist,25);
    Insert(&Frist,15);
    
    printf("Elements are :\n");

    Display(Frist);

    return 0;
}