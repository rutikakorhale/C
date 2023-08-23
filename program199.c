
#include<stdio.h>
#include<stdbool.h>

bool StricmpX(char *str1, char *str2)
{
    while((*str1 != '\0')&&(*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
    
            if((*str1 >= 'a') && (*str1 <= 'z'))
            {
                if((*str1 != (*str2+32)))
                {
                    break;
                }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z'))
            {
                if((*str1 != (*str2-32)))
                {
                    break;
                }
            }
            else 
            {
                break;
            }
            
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter Frist Strig\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string\n");
    scanf(" %[^'\n']s",Brr);

    bRet = StricmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both string are Identical\n");
    }
    else
    {
        printf("Both string are Different\n");
    }

    return 0;


    return 0;
}
