
#include<stdbool.h>
#include<stdio.h>
int cheakdigit(int ino , int isearch)
{
    int iDigit = 0;
    
    if((isearch < 0) || (isearch > 9))
    {
        printf("enter the digit in range 0 to 9\n");
        return false;
    }

    if(ino < 0)
    {
        ino = -ino;
    }
    
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit == isearch)
        {
            break;
        }
        ino = ino/10;
    }
    if(iDigit == isearch)
    {
        return true;

    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0;  int iValue2 = 0; bool bRet = 0;

    printf("enter number\n");
    scanf("%d\n",&iValue1);

    printf("enter the digit (0 to 9)\n");
    scanf("%d",&iValue2);

    bRet = cheakdigit(iValue1,iValue2);
    if(bRet == true)
    {
        printf("%d is present in %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not a present in %d\n",iValue1,iValue2);
    }

    return 0;
}