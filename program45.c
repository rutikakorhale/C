 // factroial
#include<stdio.h> 
 
int Factorial( int iNo)
{

    int ifact = 1;
    int iCnt = 0;
    iCnt = 1;
    for(;iCnt <= iNo;)
    {
        ifact = ifact * iCnt;
        iCnt++;
    }
    return ifact;

}
int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is :%d\n",iRet);
    return 0;

    

}