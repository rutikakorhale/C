
#include<stdio.h>

int MinimumDigit(int ino)
{  
    int iDigit = 0;
    int iMin = 9;

    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit < iMin)
        {
            iMin  = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        ino = ino/10;
    }
    return iMin;
}
int main()
{
    int iValue = 0; int iRet = 0;

    printf("enter number\n");
    scanf("%d\n",&iValue);

    iRet = minimunDigit(iValue);
    printf("smallest  digit is %d\n",iRet);

    return 0;
}