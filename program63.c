
#include<stdio.h>    
int ReverseNumber(int ino)
{ 
    int iDigit = 0;
    int iReverse = 0;

    if(ino < 0) 
    {
        ino = -ino;
    } 
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
    scanf("%d",&iValue);

    

    iRet = ReverseNumber(iValue);

    printf("Reverse number is %d\n",iRet);


    return 0;
}