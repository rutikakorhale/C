
// 
#include<stdio.h>
int CountCahr(char *str) 
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str == 'z' ))
        {
          iCount++;
        }
        str++;
    }
    return iCount;
    


}


int main()
{
    char Arr[10]; 
    int iRet = 0;
     
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);// special scanf.

    iRet = CountCahr(Arr); // strelenx(100)
    
    printf("Number of z are :%d\n",iRet);
    return 0;


}