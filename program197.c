
#include<stdio.h>
#include<stdbool.h>

bool StrcmpX(char *str1, char *str2)
{
    for(; (*str1 != '\0')&&(*str2 != '\0')&& (*str1 == *str2); );
    {
        str1++;
        str2++;
    
    
    }
    return((*str1 == '\0')&&(*str2 == '\0'));
}    

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter Frist Strnig\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string\n");
    scanf(" %[^'\n']s",Brr);

    bRet = StrcmpX(Arr,Brr); //100,200

    if(bRet == true)
    {
        printf("Both string are Identical\n");
    }
    else
    {
        printf("Both string are Different\n");
    }

    return 0;

}
