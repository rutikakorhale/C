
#include<stdio.h>

int CheakDigitFrequency(int iNo)
{
    int iCount = 0; 
    int iDigit = 0;

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
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CheakDigitFrequency(iValue);
    printf("frequency of 8 is :%d\n",iRet);
    return 0;
}