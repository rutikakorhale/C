
// 
#include<stdio.h>
int CountChar(char *str,char cValue) 
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str == cValue ))
        {
          iCount++;
        }
        str++;
    }
    return iCount;
    


}


int main()
{
    char Arr[20]; 
    int iRet = 0;
    char ch = '\0';
     
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enetr the character:\n");
    scanf("%c",&ch); 
    iRet = CountChar(Arr,ch); 
    
    printf("Number of Occurance are :%d\n",iRet);
    return 0;


}