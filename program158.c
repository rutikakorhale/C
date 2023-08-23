

#include<stdio.h>

int main()
{
    char Arr[10];
    int iRet = 0;
     
    printf("Enter Your Name\n");

    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);
    return 0;


}