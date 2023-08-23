
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        while(1)
        {
            if(no == temp->data)
            {
                printf("Duplicate element : Unable to insert\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }

        }

    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {  
        printf("%d\t",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);

    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    
    }
}

bool Search(PNODE Head, int No)
{
    bool flage = false;

    if(Head == NULL)
    {
        printf("Tree Is empty\n");
        return flage;
    }

    while(Head != NULL)
    {    
        if(No == Head->data)
        {
            flage = true;  // no equal element sapdla tr break
            break;
        }
        else if(No > Head->data)
        {
            Head = Head->rchild;
        }
        else if(No < Head->data)
        {
            Head = Head->lchild;
        }     
    }
    return flage;
}

int main()
{
    PNODE Frist = NULL;
    bool bRet = false;

    Insert(&Frist,21);
    Insert(&Frist,34);
    Insert(&Frist,12);
    Insert(&Frist,45);
    Insert(&Frist,100);

    printf("\n Elements in preorder format :\n");
    Preorder(Frist);

    printf("\n Elements in postorder format :\n");
    Postorder(Frist);

    printf("\n Elements in Inorder format :\n");   
    Inorder(Frist);
    
    bRet = Search(Frist,56);

    if(bRet == true)
    {
       printf("\nElements is there in BST\n");
    }
    else
    {
        printf("\nElements is not in BST\n");
    }

    return 0;
}
