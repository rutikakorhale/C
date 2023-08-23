
#include<stdio.h>
void StrcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';


    
    
}
int main()
{
    
    char Arr[20];
    char Brr[20]; /// arr sring copy Brr.
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrcpyX(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}