
#include<stdio.h>
#include<stdbool.h>

bool StrcmpX(char *str1, char *str2) 
{
    while((*str1 != '\0')&&(*str2 != '\0'))
    {
        if(*str1 != *str2) 
        {
            break;
        }
        str1++; 
        str2++; 
    }
    if((*str1 == '\0')&&(*str2 == '\0'))
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
    char Arr[20]; // array
    char Brr[20]; // array
    bool bRet = false;

    printf("Enter Frist Strig\n");
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
