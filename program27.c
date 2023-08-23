
#include<stdio.h>
#include<stdbool.h>
int Sumfactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        printf("Invalid Input\n");
    }

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    

     return iSum;

}

bool CheakPerfect(int iNumber)
{
    int iResult = 0;

    iResult = Sumfactors(iNumber);
    if(iResult == iNumber)
    {
        return true;  // your are no is perfect or not.
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;

    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheakPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number ",iValue);
    }
    else
    {
        printf("%d is not perfect number",iValue);
    }
    return 0;
}