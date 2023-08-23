
#include<stdio.h>
int StrlenXCapital(char *str) 
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = StrlenXCapital(Arr); // strelenx(100)
    
    printf("Length of Sting is :%d\n",iRet);
    return 0;


}