
#include<stdio.h>
#include<stdbool.h>
bool CheakPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        bFlag = false;
        break;
    }
    start++;
    end--;
    
}

    
    



int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String;\n");
    scanf("%[^\n']s",Arr);

    bRet = CheakPallindrome(Arr);

    if(bRet == true)
    {
        printf("Sting is Pallindrom\n");
    }
    else
    {
        printf("Sting is not Pallindrom\n");
    }


    return 0;
}
