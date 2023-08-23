// most important topic for interview
#include<stdio.h>
void StrcpyrevX(char *src, char *dest)// Arr mnje *src, Brr mnje *dest
{
    int iLength = 0;
    while(*src != '\0')
    {
        src++;
        iLength++;
    }
    src--;

    for(; iLength != 0; iLength--)
    {
        *dest = *src;
        src--;
        dest++;
    }
    *dest = '\0';


    
    
}
int main()
{
    
    char Arr[20];
    char Brr[20];
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrcpyrevX(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}