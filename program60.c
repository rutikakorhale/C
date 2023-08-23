

#include<stdio.h>
int CountDigitFrequency(int ino , int isearch)
{
    int iDigit = 0;
    int iCounter = 0;

    if((isearch < 0) || (isearch > 9))
    {
        printf("enter the digit in range 0 to 9\n");
        return 0;
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
            iCounter++;
        }
        ino = ino/10;
        
    }
    return iCounter;
}
int main()
{
    int iValue1 = 0;  int iValue2 = 0;int iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue1);

    printf("enter the digit (0 to 9)\n");
    scanf("%d",&iValue2);

    iRet = CountDigitFrequency(iValue1,iValue2);
    printf("Frequency of %d is in %d : %d\n",iValue1,iValue2,iRet);

    return 0;
}