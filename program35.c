#include<stdio.h>
#include<stdbool.h>

unsigned long int CalculaetrPower(int iBase, int iPower) 
{                         
    int iCnt = 0;
    unsigned long int iResult = 1;

    if((iBase < 0)|| (iPower < 0))
    {
        return 0;
    }

    for(iCnt =1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iPower;
    }
    return iResult;

}
int main()
{
    int iValue1 = 0; int iValue2 = 0;
    unsigned long int iRet = 0;
    printf("enter the Base\n");
    scanf("%d",&iValue1);

    printf("Enter  the power\n");
    scanf("%d",&iValue2);




    iRet = CalculaetrPower(iValue1,iValue2);
    printf("Result is : %d",iRet);
    
    return 0;
}