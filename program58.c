
#include<stdio.h>
int CountFrequency( int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo/10;

    }
    return iCount;
}
int main()
{
    int iValue = 0;  int iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);
    printf("Frequency of 8 is :%d\n",iRet);
    return 0;
}