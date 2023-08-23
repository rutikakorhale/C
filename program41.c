  
#include<stdio.h>
typedef unsigned long int ULONG; 
 
ULONG factorial(int iNo)
{
    
    ULONG ifact = 1;
    int iCnt = 0;
    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
       ifact = ifact *iCnt;

    }
    return ifact;

}
int main()
{ 
    int iValue = 0;
    ULONG iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);
    printf("Result is :%d\n",iRet);

    return 0;

}