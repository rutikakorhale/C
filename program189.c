// concatination intq que 
#include<stdio.h>
// travel till end of dest step 1
// step 2: copy the data from 
void StrcatX(char *src, char *dest)// Arr mnje *src, Brr mnje *d
{
    // 1: travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }
    //2 copy the data from src to dest 
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    // 3 write '\0' at te end of dest
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