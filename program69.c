// max Digit.
#include<stdio.h>

int MaximumDigit(int ino)
{  
    int iDigit = 0;
    int imax = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit > imax)
        {
            imax  = iDigit;
        }
        ino = ino/10;
    }
    return imax;    
}
int main()
{
    int iValue = 0; int iRet = 0;

    printf("enter Digit \n");
    scanf("%d\n",&iValue);

    iRet = MaximumDigit(iValue);
    printf("largest  digit is %d\n",iRet);

    return 0;
}