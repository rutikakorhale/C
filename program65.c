
#include<stdio.h>
#include<stdbool.h>
int cheakpallindrome(int ino)
{ 
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = ino; 

    while(ino != 0)
    {
        iDigit = ino % 10;
        iReverse = (iReverse * 10)+iDigit;
        ino = ino / 10;
    }
    if(iReverse == iTemp)
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
    int iValue = 0;  bool bRet = false;

    printf("enter number\n");
    scanf("%d",&iValue);

    

    bRet = cheakpallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is a pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is a not a pallindrome\n",iValue);
    }

    


    return 0;
}