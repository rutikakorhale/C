
#include<stdio.h>
#include<stdbool.h>
bool CheakDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
       iDigit = iNo %10;
       if (iDigit == 8 )
       {
         break;
       } 
           
       iNo = iNo /10;
    }   
       if (iDigit == 8)
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
    int iValue =0;
    bool bRet = false;

    printf("enter number\n");
    scanf("%d\n",&iValue);

    bRet = CheakDigits(iValue);
    if(bRet == true)
    {
        printf("Digit 8 is a present\n");
    }
    else
    {
        printf("Digit 8 is a not a present\n");
    }
    return 0;
}