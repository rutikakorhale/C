
#include<stdio.h>
int CountoddDigit(int ino)
{
    int iCounter = 0;
    int iDigit = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        if((iDigit % 2) != 0)
        {
            iCounter++;
        }
        ino = ino/10;
        
    }
    return iCounter;

    
}
int main()
{
    int iValue = 0;  int iRet = 0;

    printf("enter number\n");
    scanf("%d\n",&iValue);


    iRet = CountoddDigit(iValue);

    printf("frequency of odd digit in %d is %d\n",iValue,iRet);


    return 0;
}