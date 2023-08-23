

#include<stdio.h>
int StrlenXDigits(char *str) 
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
          iCount++;
        }
        str++;
    }
    return iCount;
    


}


int main()
{
    char Arr[10]; // satic memory allocation
    int iRet = 0;
     
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);// special scanf.

    iRet = StrlenXDigits(Arr); // strelenx(100)
    
    printf("Number of Digits are :%d\n",iRet);
    return 0;


}