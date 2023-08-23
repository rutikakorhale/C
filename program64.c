
#include<stdio.h>
int ReverseNumber(int ino)
{ 
    int iDigit = 0;
    int iReverse = 0;
     
    while(ino != 0)
    {
        iDigit = ino % 10;
        iReverse = (iReverse * 10)+iDigit;
        ino = ino /10;
    }
    return iReverse;   
    
}

int main()
{
    int iValue = 0;  int iRet = 0;

    printf("enter number\n");
    scanf("%d\n",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse number is %d\n",iRet);

    return 0;
}