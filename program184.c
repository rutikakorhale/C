
#include<stdio.h>
void StrcpyXsmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
          *dest = *src;
           dest++; 
           
        }
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

    StrcpyXsmall(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}