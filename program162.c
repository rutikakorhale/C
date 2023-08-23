

#include<stdio.h>
int StrlensmallX(char *str) // change.
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = StrlensmallX(Arr); // strelenx(100)
    
    printf("Length of Sting is :%d\n",iRet);
    return 0;


}