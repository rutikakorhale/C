
#include<stdio.h>
#include<stdbool.h>

bool Cheakperfect(int iNo)
{ 
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}
     
    
int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet = Cheakperfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfeact number\n",iValue);
    }

    return 0;
}