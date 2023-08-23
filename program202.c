// Int Q most imp.
#include<stdio.h>
#include<stdbool.h>
void CheakPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        if(*start != 0)
        {
            break;
        }
        start++;
        end--;
    }
    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
}

    
    



int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String;\n");
    scanf("%[^\n']s",Arr);

    bRet = CheakPallindrom(Arr);

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
