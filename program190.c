// most important topic for interview
#include<stdio.h>
// travel till end of dest step 1
// step 2: copy the data from 
void StrcatX(char *src, char *dest)// Arr mnje *src, Brr mnje *d
{
    // 1
    while(*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';
    dest++;
    //2
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    // 3
    *dest = '\0';
}
int main()
{
    
    char Arr[20];
    char Brr[20] = "Demo";
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrcatX(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}