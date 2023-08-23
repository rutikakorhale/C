// most important topic for interview
#include<stdio.h>
void strcpytoggleX(char *src, char *dest)// Arr mnje *src, Brr mnje *dest
{
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
          *dest = *src + 32;
           
        }
        else if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else // this else add whitespace remove
        {
            *dest = *src; 
        }
        dest++;
        src++;
        
    }
    *dest = '\0';


    
    
}
int main()
{
    
    char Arr[20];
    char Brr[20];
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strcpytoggleX(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}